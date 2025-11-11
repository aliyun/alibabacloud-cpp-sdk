// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETREQUESTDOCUMENTHANDLECONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETREQUESTDOCUMENTHANDLECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class CreateDatasetRequestDocumentHandleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetRequestDocumentHandleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DisableHandleMultimodalMedia, disableHandleMultimodalMedia_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetRequestDocumentHandleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DisableHandleMultimodalMedia, disableHandleMultimodalMedia_);
    };
    CreateDatasetRequestDocumentHandleConfig() = default ;
    CreateDatasetRequestDocumentHandleConfig(const CreateDatasetRequestDocumentHandleConfig &) = default ;
    CreateDatasetRequestDocumentHandleConfig(CreateDatasetRequestDocumentHandleConfig &&) = default ;
    CreateDatasetRequestDocumentHandleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetRequestDocumentHandleConfig() = default ;
    CreateDatasetRequestDocumentHandleConfig& operator=(const CreateDatasetRequestDocumentHandleConfig &) = default ;
    CreateDatasetRequestDocumentHandleConfig& operator=(CreateDatasetRequestDocumentHandleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->disableHandleMultimodalMedia_ == nullptr; };
    // disableHandleMultimodalMedia Field Functions 
    bool hasDisableHandleMultimodalMedia() const { return this->disableHandleMultimodalMedia_ != nullptr;};
    void deleteDisableHandleMultimodalMedia() { this->disableHandleMultimodalMedia_ = nullptr;};
    inline bool disableHandleMultimodalMedia() const { DARABONBA_PTR_GET_DEFAULT(disableHandleMultimodalMedia_, false) };
    inline CreateDatasetRequestDocumentHandleConfig& setDisableHandleMultimodalMedia(bool disableHandleMultimodalMedia) { DARABONBA_PTR_SET_VALUE(disableHandleMultimodalMedia_, disableHandleMultimodalMedia) };


  protected:
    std::shared_ptr<bool> disableHandleMultimodalMedia_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
