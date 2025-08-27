// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINSTATIONSEARCHRESPONSEBODYMODULECITIES_HPP_
#define ALIBABACLOUD_MODELS_TRAINSTATIONSEARCHRESPONSEBODYMODULECITIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainStationSearchResponseBodyModuleCities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainStationSearchResponseBodyModuleCities& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, TrainStationSearchResponseBodyModuleCities& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    TrainStationSearchResponseBodyModuleCities() = default ;
    TrainStationSearchResponseBodyModuleCities(const TrainStationSearchResponseBodyModuleCities &) = default ;
    TrainStationSearchResponseBodyModuleCities(TrainStationSearchResponseBodyModuleCities &&) = default ;
    TrainStationSearchResponseBodyModuleCities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainStationSearchResponseBodyModuleCities() = default ;
    TrainStationSearchResponseBodyModuleCities& operator=(const TrainStationSearchResponseBodyModuleCities &) = default ;
    TrainStationSearchResponseBodyModuleCities& operator=(TrainStationSearchResponseBodyModuleCities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->name_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TrainStationSearchResponseBodyModuleCities& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline TrainStationSearchResponseBodyModuleCities& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
