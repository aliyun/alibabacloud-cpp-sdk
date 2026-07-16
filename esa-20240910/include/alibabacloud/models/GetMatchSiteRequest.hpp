// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMATCHSITEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMATCHSITEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetMatchSiteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMatchSiteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RecordName, recordName_);
    };
    friend void from_json(const Darabonba::Json& j, GetMatchSiteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
    };
    GetMatchSiteRequest() = default ;
    GetMatchSiteRequest(const GetMatchSiteRequest &) = default ;
    GetMatchSiteRequest(GetMatchSiteRequest &&) = default ;
    GetMatchSiteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMatchSiteRequest() = default ;
    GetMatchSiteRequest& operator=(const GetMatchSiteRequest &) = default ;
    GetMatchSiteRequest& operator=(GetMatchSiteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordName_ == nullptr; };
    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string getRecordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline GetMatchSiteRequest& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


  protected:
    // The record name.
    // 
    // This parameter is required.
    shared_ptr<string> recordName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
