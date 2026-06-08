// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ABTESTEXPERIMENT_HPP_
#define ALIBABACLOUD_MODELS_ABTESTEXPERIMENT_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ABTestExperiment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ABTestExperiment& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(online, online_);
      DARABONBA_PTR_TO_JSON(params, params_);
      DARABONBA_PTR_TO_JSON(serialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(traffic, traffic_);
    };
    friend void from_json(const Darabonba::Json& j, ABTestExperiment& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(online, online_);
      DARABONBA_PTR_FROM_JSON(params, params_);
      DARABONBA_PTR_FROM_JSON(serialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(traffic, traffic_);
    };
    ABTestExperiment() = default ;
    ABTestExperiment(const ABTestExperiment &) = default ;
    ABTestExperiment(ABTestExperiment &&) = default ;
    ABTestExperiment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ABTestExperiment() = default ;
    ABTestExperiment& operator=(const ABTestExperiment &) = default ;
    ABTestExperiment& operator=(ABTestExperiment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->online_ == nullptr && this->params_ == nullptr && this->serialNumber_ == nullptr && this->traffic_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ABTestExperiment& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline bool getOnline() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
    inline ABTestExperiment& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const map<string, string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, map<string, string>) };
    inline map<string, string> getParams() { DARABONBA_PTR_GET(params_, map<string, string>) };
    inline ABTestExperiment& setParams(const map<string, string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ABTestExperiment& setParams(map<string, string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline int32_t getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, 0) };
    inline ABTestExperiment& setSerialNumber(int32_t serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // traffic Field Functions 
    bool hasTraffic() const { return this->traffic_ != nullptr;};
    void deleteTraffic() { this->traffic_ = nullptr;};
    inline int32_t getTraffic() const { DARABONBA_PTR_GET_DEFAULT(traffic_, 0) };
    inline ABTestExperiment& setTraffic(int32_t traffic) { DARABONBA_PTR_SET_VALUE(traffic_, traffic) };


  protected:
    shared_ptr<string> name_ {};
    shared_ptr<bool> online_ {};
    shared_ptr<map<string, string>> params_ {};
    shared_ptr<int32_t> serialNumber_ {};
    shared_ptr<int32_t> traffic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
