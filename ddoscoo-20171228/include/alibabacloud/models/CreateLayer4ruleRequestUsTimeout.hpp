// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELAYER4RULEREQUESTUSTIMEOUT_HPP_
#define ALIBABACLOUD_MODELS_CREATELAYER4RULEREQUESTUSTIMEOUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class CreateLayer4RuleRequestUsTimeout : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLayer4RuleRequestUsTimeout& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectTimeout, connectTimeout_);
      DARABONBA_PTR_TO_JSON(RsTimeout, rsTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLayer4RuleRequestUsTimeout& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectTimeout, connectTimeout_);
      DARABONBA_PTR_FROM_JSON(RsTimeout, rsTimeout_);
    };
    CreateLayer4RuleRequestUsTimeout() = default ;
    CreateLayer4RuleRequestUsTimeout(const CreateLayer4RuleRequestUsTimeout &) = default ;
    CreateLayer4RuleRequestUsTimeout(CreateLayer4RuleRequestUsTimeout &&) = default ;
    CreateLayer4RuleRequestUsTimeout(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLayer4RuleRequestUsTimeout() = default ;
    CreateLayer4RuleRequestUsTimeout& operator=(const CreateLayer4RuleRequestUsTimeout &) = default ;
    CreateLayer4RuleRequestUsTimeout& operator=(CreateLayer4RuleRequestUsTimeout &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectTimeout_ != nullptr
        && this->rsTimeout_ != nullptr; };
    // connectTimeout Field Functions 
    bool hasConnectTimeout() const { return this->connectTimeout_ != nullptr;};
    void deleteConnectTimeout() { this->connectTimeout_ = nullptr;};
    inline int64_t connectTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectTimeout_, 0L) };
    inline CreateLayer4RuleRequestUsTimeout& setConnectTimeout(int64_t connectTimeout) { DARABONBA_PTR_SET_VALUE(connectTimeout_, connectTimeout) };


    // rsTimeout Field Functions 
    bool hasRsTimeout() const { return this->rsTimeout_ != nullptr;};
    void deleteRsTimeout() { this->rsTimeout_ = nullptr;};
    inline int64_t rsTimeout() const { DARABONBA_PTR_GET_DEFAULT(rsTimeout_, 0L) };
    inline CreateLayer4RuleRequestUsTimeout& setRsTimeout(int64_t rsTimeout) { DARABONBA_PTR_SET_VALUE(rsTimeout_, rsTimeout) };


  protected:
    std::shared_ptr<int64_t> connectTimeout_ = nullptr;
    std::shared_ptr<int64_t> rsTimeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
