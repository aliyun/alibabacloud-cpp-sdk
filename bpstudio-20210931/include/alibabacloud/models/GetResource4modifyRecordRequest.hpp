// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCE4MODIFYRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCE4MODIFYRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetResource4ModifyRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResource4ModifyRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetResource4ModifyRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    GetResource4ModifyRecordRequest() = default ;
    GetResource4ModifyRecordRequest(const GetResource4ModifyRecordRequest &) = default ;
    GetResource4ModifyRecordRequest(GetResource4ModifyRecordRequest &&) = default ;
    GetResource4ModifyRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResource4ModifyRecordRequest() = default ;
    GetResource4ModifyRecordRequest& operator=(const GetResource4ModifyRecordRequest &) = default ;
    GetResource4ModifyRecordRequest& operator=(GetResource4ModifyRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline GetResource4ModifyRecordRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline GetResource4ModifyRecordRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline int64_t nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, 0L) };
    inline GetResource4ModifyRecordRequest& setNextToken(int64_t nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    std::shared_ptr<int64_t> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
