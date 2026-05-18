// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPSMAPPINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPSMAPPINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class ListUserGroupsMappingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupsMappingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FilesystemId, filesystemId_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupsMappingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FilesystemId, filesystemId_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListUserGroupsMappingsRequest() = default ;
    ListUserGroupsMappingsRequest(const ListUserGroupsMappingsRequest &) = default ;
    ListUserGroupsMappingsRequest(ListUserGroupsMappingsRequest &&) = default ;
    ListUserGroupsMappingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserGroupsMappingsRequest() = default ;
    ListUserGroupsMappingsRequest& operator=(const ListUserGroupsMappingsRequest &) = default ;
    ListUserGroupsMappingsRequest& operator=(ListUserGroupsMappingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filesystemId_ == nullptr
        && this->inputRegionId_ == nullptr && this->limit_ == nullptr && this->nextToken_ == nullptr; };
    // filesystemId Field Functions 
    bool hasFilesystemId() const { return this->filesystemId_ != nullptr;};
    void deleteFilesystemId() { this->filesystemId_ = nullptr;};
    inline string getFilesystemId() const { DARABONBA_PTR_GET_DEFAULT(filesystemId_, "") };
    inline ListUserGroupsMappingsRequest& setFilesystemId(string filesystemId) { DARABONBA_PTR_SET_VALUE(filesystemId_, filesystemId) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string getInputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline ListUserGroupsMappingsRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListUserGroupsMappingsRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUserGroupsMappingsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // This parameter is required.
    shared_ptr<string> filesystemId_ {};
    // This parameter is required.
    shared_ptr<string> inputRegionId_ {};
    shared_ptr<int32_t> limit_ {};
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
