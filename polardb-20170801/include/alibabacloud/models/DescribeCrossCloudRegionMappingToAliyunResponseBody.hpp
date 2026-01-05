// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECROSSCLOUDREGIONMAPPINGTOALIYUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECROSSCLOUDREGIONMAPPINGTOALIYUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeCrossCloudRegionMappingToAliyunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrossCloudRegionMappingToAliyunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CrossCloudRegionMappingList, crossCloudRegionMappingList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrossCloudRegionMappingToAliyunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossCloudRegionMappingList, crossCloudRegionMappingList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCrossCloudRegionMappingToAliyunResponseBody() = default ;
    DescribeCrossCloudRegionMappingToAliyunResponseBody(const DescribeCrossCloudRegionMappingToAliyunResponseBody &) = default ;
    DescribeCrossCloudRegionMappingToAliyunResponseBody(DescribeCrossCloudRegionMappingToAliyunResponseBody &&) = default ;
    DescribeCrossCloudRegionMappingToAliyunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrossCloudRegionMappingToAliyunResponseBody() = default ;
    DescribeCrossCloudRegionMappingToAliyunResponseBody& operator=(const DescribeCrossCloudRegionMappingToAliyunResponseBody &) = default ;
    DescribeCrossCloudRegionMappingToAliyunResponseBody& operator=(DescribeCrossCloudRegionMappingToAliyunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CrossCloudRegionMappingList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CrossCloudRegionMappingList& obj) { 
        DARABONBA_PTR_TO_JSON(AliyunRegionId, aliyunRegionId_);
        DARABONBA_PTR_TO_JSON(CloudProvider, cloudProvider_);
        DARABONBA_PTR_TO_JSON(CrossCloudRegionId, crossCloudRegionId_);
      };
      friend void from_json(const Darabonba::Json& j, CrossCloudRegionMappingList& obj) { 
        DARABONBA_PTR_FROM_JSON(AliyunRegionId, aliyunRegionId_);
        DARABONBA_PTR_FROM_JSON(CloudProvider, cloudProvider_);
        DARABONBA_PTR_FROM_JSON(CrossCloudRegionId, crossCloudRegionId_);
      };
      CrossCloudRegionMappingList() = default ;
      CrossCloudRegionMappingList(const CrossCloudRegionMappingList &) = default ;
      CrossCloudRegionMappingList(CrossCloudRegionMappingList &&) = default ;
      CrossCloudRegionMappingList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CrossCloudRegionMappingList() = default ;
      CrossCloudRegionMappingList& operator=(const CrossCloudRegionMappingList &) = default ;
      CrossCloudRegionMappingList& operator=(CrossCloudRegionMappingList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliyunRegionId_ == nullptr
        && this->cloudProvider_ == nullptr && this->crossCloudRegionId_ == nullptr; };
      // aliyunRegionId Field Functions 
      bool hasAliyunRegionId() const { return this->aliyunRegionId_ != nullptr;};
      void deleteAliyunRegionId() { this->aliyunRegionId_ = nullptr;};
      inline string getAliyunRegionId() const { DARABONBA_PTR_GET_DEFAULT(aliyunRegionId_, "") };
      inline CrossCloudRegionMappingList& setAliyunRegionId(string aliyunRegionId) { DARABONBA_PTR_SET_VALUE(aliyunRegionId_, aliyunRegionId) };


      // cloudProvider Field Functions 
      bool hasCloudProvider() const { return this->cloudProvider_ != nullptr;};
      void deleteCloudProvider() { this->cloudProvider_ = nullptr;};
      inline string getCloudProvider() const { DARABONBA_PTR_GET_DEFAULT(cloudProvider_, "") };
      inline CrossCloudRegionMappingList& setCloudProvider(string cloudProvider) { DARABONBA_PTR_SET_VALUE(cloudProvider_, cloudProvider) };


      // crossCloudRegionId Field Functions 
      bool hasCrossCloudRegionId() const { return this->crossCloudRegionId_ != nullptr;};
      void deleteCrossCloudRegionId() { this->crossCloudRegionId_ = nullptr;};
      inline string getCrossCloudRegionId() const { DARABONBA_PTR_GET_DEFAULT(crossCloudRegionId_, "") };
      inline CrossCloudRegionMappingList& setCrossCloudRegionId(string crossCloudRegionId) { DARABONBA_PTR_SET_VALUE(crossCloudRegionId_, crossCloudRegionId) };


    protected:
      shared_ptr<string> aliyunRegionId_ {};
      shared_ptr<string> cloudProvider_ {};
      shared_ptr<string> crossCloudRegionId_ {};
    };

    virtual bool empty() const override { return this->crossCloudRegionMappingList_ == nullptr
        && this->requestId_ == nullptr; };
    // crossCloudRegionMappingList Field Functions 
    bool hasCrossCloudRegionMappingList() const { return this->crossCloudRegionMappingList_ != nullptr;};
    void deleteCrossCloudRegionMappingList() { this->crossCloudRegionMappingList_ = nullptr;};
    inline const vector<DescribeCrossCloudRegionMappingToAliyunResponseBody::CrossCloudRegionMappingList> & getCrossCloudRegionMappingList() const { DARABONBA_PTR_GET_CONST(crossCloudRegionMappingList_, vector<DescribeCrossCloudRegionMappingToAliyunResponseBody::CrossCloudRegionMappingList>) };
    inline vector<DescribeCrossCloudRegionMappingToAliyunResponseBody::CrossCloudRegionMappingList> getCrossCloudRegionMappingList() { DARABONBA_PTR_GET(crossCloudRegionMappingList_, vector<DescribeCrossCloudRegionMappingToAliyunResponseBody::CrossCloudRegionMappingList>) };
    inline DescribeCrossCloudRegionMappingToAliyunResponseBody& setCrossCloudRegionMappingList(const vector<DescribeCrossCloudRegionMappingToAliyunResponseBody::CrossCloudRegionMappingList> & crossCloudRegionMappingList) { DARABONBA_PTR_SET_VALUE(crossCloudRegionMappingList_, crossCloudRegionMappingList) };
    inline DescribeCrossCloudRegionMappingToAliyunResponseBody& setCrossCloudRegionMappingList(vector<DescribeCrossCloudRegionMappingToAliyunResponseBody::CrossCloudRegionMappingList> && crossCloudRegionMappingList) { DARABONBA_PTR_SET_RVALUE(crossCloudRegionMappingList_, crossCloudRegionMappingList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCrossCloudRegionMappingToAliyunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeCrossCloudRegionMappingToAliyunResponseBody::CrossCloudRegionMappingList>> crossCloudRegionMappingList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
