// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRENDERINGINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRENDERINGINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListRenderingInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRenderingInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RenderingInstances, renderingInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRenderingInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RenderingInstances, renderingInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRenderingInstancesResponseBody() = default ;
    ListRenderingInstancesResponseBody(const ListRenderingInstancesResponseBody &) = default ;
    ListRenderingInstancesResponseBody(ListRenderingInstancesResponseBody &&) = default ;
    ListRenderingInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRenderingInstancesResponseBody() = default ;
    ListRenderingInstancesResponseBody& operator=(const ListRenderingInstancesResponseBody &) = default ;
    ListRenderingInstancesResponseBody& operator=(ListRenderingInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RenderingInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RenderingInstances& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
        DARABONBA_PTR_TO_JSON(RenderingSpec, renderingSpec_);
        DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      };
      friend void from_json(const Darabonba::Json& j, RenderingInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
        DARABONBA_PTR_FROM_JSON(RenderingSpec, renderingSpec_);
        DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      };
      RenderingInstances() = default ;
      RenderingInstances(const RenderingInstances &) = default ;
      RenderingInstances(RenderingInstances &&) = default ;
      RenderingInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RenderingInstances() = default ;
      RenderingInstances& operator=(const RenderingInstances &) = default ;
      RenderingInstances& operator=(RenderingInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->renderingInstanceId_ == nullptr && this->renderingSpec_ == nullptr && this->storageSize_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline RenderingInstances& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // renderingInstanceId Field Functions 
      bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
      void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
      inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
      inline RenderingInstances& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


      // renderingSpec Field Functions 
      bool hasRenderingSpec() const { return this->renderingSpec_ != nullptr;};
      void deleteRenderingSpec() { this->renderingSpec_ = nullptr;};
      inline string getRenderingSpec() const { DARABONBA_PTR_GET_DEFAULT(renderingSpec_, "") };
      inline RenderingInstances& setRenderingSpec(string renderingSpec) { DARABONBA_PTR_SET_VALUE(renderingSpec_, renderingSpec) };


      // storageSize Field Functions 
      bool hasStorageSize() const { return this->storageSize_ != nullptr;};
      void deleteStorageSize() { this->storageSize_ = nullptr;};
      inline int32_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
      inline RenderingInstances& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    protected:
      shared_ptr<string> creationTime_ {};
      shared_ptr<string> renderingInstanceId_ {};
      shared_ptr<string> renderingSpec_ {};
      shared_ptr<int32_t> storageSize_ {};
    };

    virtual bool empty() const override { return this->renderingInstances_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // renderingInstances Field Functions 
    bool hasRenderingInstances() const { return this->renderingInstances_ != nullptr;};
    void deleteRenderingInstances() { this->renderingInstances_ = nullptr;};
    inline const vector<ListRenderingInstancesResponseBody::RenderingInstances> & getRenderingInstances() const { DARABONBA_PTR_GET_CONST(renderingInstances_, vector<ListRenderingInstancesResponseBody::RenderingInstances>) };
    inline vector<ListRenderingInstancesResponseBody::RenderingInstances> getRenderingInstances() { DARABONBA_PTR_GET(renderingInstances_, vector<ListRenderingInstancesResponseBody::RenderingInstances>) };
    inline ListRenderingInstancesResponseBody& setRenderingInstances(const vector<ListRenderingInstancesResponseBody::RenderingInstances> & renderingInstances) { DARABONBA_PTR_SET_VALUE(renderingInstances_, renderingInstances) };
    inline ListRenderingInstancesResponseBody& setRenderingInstances(vector<ListRenderingInstancesResponseBody::RenderingInstances> && renderingInstances) { DARABONBA_PTR_SET_RVALUE(renderingInstances_, renderingInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRenderingInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRenderingInstancesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListRenderingInstancesResponseBody::RenderingInstances>> renderingInstances_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
