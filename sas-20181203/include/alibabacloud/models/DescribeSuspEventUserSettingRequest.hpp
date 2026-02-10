// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTUSERSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTUSERSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSuspEventUserSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspEventUserSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSuspEventUserSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeSuspEventUserSettingRequest() = default ;
    DescribeSuspEventUserSettingRequest(const DescribeSuspEventUserSettingRequest &) = default ;
    DescribeSuspEventUserSettingRequest(DescribeSuspEventUserSettingRequest &&) = default ;
    DescribeSuspEventUserSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSuspEventUserSettingRequest() = default ;
    DescribeSuspEventUserSettingRequest& operator=(const DescribeSuspEventUserSettingRequest &) = default ;
    DescribeSuspEventUserSettingRequest& operator=(DescribeSuspEventUserSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr
        && this->id_ == nullptr && this->sourceIp_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline DescribeSuspEventUserSettingRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DescribeSuspEventUserSettingRequest& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeSuspEventUserSettingRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The ID of the request source. Set the value to **sas**.
    shared_ptr<string> from_ {};
    // The ID. You do not need to specify this parameter.
    shared_ptr<int32_t> id_ {};
    // The IP address of the request. You do not need to specify this parameter.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
