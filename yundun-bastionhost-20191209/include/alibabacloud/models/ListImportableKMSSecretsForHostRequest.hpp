// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMPORTABLEKMSSECRETSFORHOSTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIMPORTABLEKMSSECRETSFORHOSTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListImportableKMSSecretsForHostRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImportableKMSSecretsForHostRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListImportableKMSSecretsForHostRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListImportableKMSSecretsForHostRequest() = default ;
    ListImportableKMSSecretsForHostRequest(const ListImportableKMSSecretsForHostRequest &) = default ;
    ListImportableKMSSecretsForHostRequest(ListImportableKMSSecretsForHostRequest &&) = default ;
    ListImportableKMSSecretsForHostRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImportableKMSSecretsForHostRequest() = default ;
    ListImportableKMSSecretsForHostRequest& operator=(const ListImportableKMSSecretsForHostRequest &) = default ;
    ListImportableKMSSecretsForHostRequest& operator=(ListImportableKMSSecretsForHostRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostId_ == nullptr
        && this->instanceId_ == nullptr && this->keyword_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr; };
    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline int32_t getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, 0) };
    inline ListImportableKMSSecretsForHostRequest& setHostId(int32_t hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListImportableKMSSecretsForHostRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListImportableKMSSecretsForHostRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListImportableKMSSecretsForHostRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListImportableKMSSecretsForHostRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListImportableKMSSecretsForHostRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<int32_t> hostId_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> keyword_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
