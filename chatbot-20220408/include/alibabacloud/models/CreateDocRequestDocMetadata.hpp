// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOCREQUESTDOCMETADATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOCREQUESTDOCMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDocRequestDocMetadataMetaCellInfoDTOList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class CreateDocRequestDocMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDocRequestDocMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessViewId, businessViewId_);
      DARABONBA_PTR_TO_JSON(BusinessViewName, businessViewName_);
      DARABONBA_PTR_TO_JSON(MetaCellInfoDTOList, metaCellInfoDTOList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDocRequestDocMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessViewId, businessViewId_);
      DARABONBA_PTR_FROM_JSON(BusinessViewName, businessViewName_);
      DARABONBA_PTR_FROM_JSON(MetaCellInfoDTOList, metaCellInfoDTOList_);
    };
    CreateDocRequestDocMetadata() = default ;
    CreateDocRequestDocMetadata(const CreateDocRequestDocMetadata &) = default ;
    CreateDocRequestDocMetadata(CreateDocRequestDocMetadata &&) = default ;
    CreateDocRequestDocMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDocRequestDocMetadata() = default ;
    CreateDocRequestDocMetadata& operator=(const CreateDocRequestDocMetadata &) = default ;
    CreateDocRequestDocMetadata& operator=(CreateDocRequestDocMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessViewId_ != nullptr
        && this->businessViewName_ != nullptr && this->metaCellInfoDTOList_ != nullptr; };
    // businessViewId Field Functions 
    bool hasBusinessViewId() const { return this->businessViewId_ != nullptr;};
    void deleteBusinessViewId() { this->businessViewId_ = nullptr;};
    inline string businessViewId() const { DARABONBA_PTR_GET_DEFAULT(businessViewId_, "") };
    inline CreateDocRequestDocMetadata& setBusinessViewId(string businessViewId) { DARABONBA_PTR_SET_VALUE(businessViewId_, businessViewId) };


    // businessViewName Field Functions 
    bool hasBusinessViewName() const { return this->businessViewName_ != nullptr;};
    void deleteBusinessViewName() { this->businessViewName_ = nullptr;};
    inline string businessViewName() const { DARABONBA_PTR_GET_DEFAULT(businessViewName_, "") };
    inline CreateDocRequestDocMetadata& setBusinessViewName(string businessViewName) { DARABONBA_PTR_SET_VALUE(businessViewName_, businessViewName) };


    // metaCellInfoDTOList Field Functions 
    bool hasMetaCellInfoDTOList() const { return this->metaCellInfoDTOList_ != nullptr;};
    void deleteMetaCellInfoDTOList() { this->metaCellInfoDTOList_ = nullptr;};
    inline const vector<Models::CreateDocRequestDocMetadataMetaCellInfoDTOList> & metaCellInfoDTOList() const { DARABONBA_PTR_GET_CONST(metaCellInfoDTOList_, vector<Models::CreateDocRequestDocMetadataMetaCellInfoDTOList>) };
    inline vector<Models::CreateDocRequestDocMetadataMetaCellInfoDTOList> metaCellInfoDTOList() { DARABONBA_PTR_GET(metaCellInfoDTOList_, vector<Models::CreateDocRequestDocMetadataMetaCellInfoDTOList>) };
    inline CreateDocRequestDocMetadata& setMetaCellInfoDTOList(const vector<Models::CreateDocRequestDocMetadataMetaCellInfoDTOList> & metaCellInfoDTOList) { DARABONBA_PTR_SET_VALUE(metaCellInfoDTOList_, metaCellInfoDTOList) };
    inline CreateDocRequestDocMetadata& setMetaCellInfoDTOList(vector<Models::CreateDocRequestDocMetadataMetaCellInfoDTOList> && metaCellInfoDTOList) { DARABONBA_PTR_SET_RVALUE(metaCellInfoDTOList_, metaCellInfoDTOList) };


  protected:
    std::shared_ptr<string> businessViewId_ = nullptr;
    std::shared_ptr<string> businessViewName_ = nullptr;
    std::shared_ptr<vector<Models::CreateDocRequestDocMetadataMetaCellInfoDTOList>> metaCellInfoDTOList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
