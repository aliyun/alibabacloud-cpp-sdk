// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELGALLERYMODELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELGALLERYMODELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModelGalleryModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIModelGallery20260603
{
namespace Models
{
  class ListModelGalleryModelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelGalleryModelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Models, models_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelGalleryModelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Models, models_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListModelGalleryModelsResponseBody() = default ;
    ListModelGalleryModelsResponseBody(const ListModelGalleryModelsResponseBody &) = default ;
    ListModelGalleryModelsResponseBody(ListModelGalleryModelsResponseBody &&) = default ;
    ListModelGalleryModelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelGalleryModelsResponseBody() = default ;
    ListModelGalleryModelsResponseBody& operator=(const ListModelGalleryModelsResponseBody &) = default ;
    ListModelGalleryModelsResponseBody& operator=(ListModelGalleryModelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->models_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // models Field Functions 
    bool hasModels() const { return this->models_ != nullptr;};
    void deleteModels() { this->models_ = nullptr;};
    inline const ModelGalleryModel & getModels() const { DARABONBA_PTR_GET_CONST(models_, ModelGalleryModel) };
    inline ModelGalleryModel getModels() { DARABONBA_PTR_GET(models_, ModelGalleryModel) };
    inline ListModelGalleryModelsResponseBody& setModels(const ModelGalleryModel & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
    inline ListModelGalleryModelsResponseBody& setModels(ModelGalleryModel && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListModelGalleryModelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListModelGalleryModelsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<ModelGalleryModel> models_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIModelGallery20260603
#endif
