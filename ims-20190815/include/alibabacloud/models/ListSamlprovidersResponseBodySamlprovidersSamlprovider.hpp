// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSAMLPROVIDERSRESPONSEBODYSAMLPROVIDERSSAMLPROVIDER_HPP_
#define ALIBABACLOUD_MODELS_LISTSAMLPROVIDERSRESPONSEBODYSAMLPROVIDERSSAMLPROVIDER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SAMLProviderName, SAMLProviderName_);
      DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
    };
    friend void from_json(const Darabonba::Json& j, ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SAMLProviderName, SAMLProviderName_);
      DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
    };
    ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider() = default ;
    ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider(const ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider &) = default ;
    ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider(ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider &&) = default ;
    ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider() = default ;
    ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider& operator=(const ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider &) = default ;
    ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider& operator=(ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arn_ != nullptr
        && this->createDate_ != nullptr && this->description_ != nullptr && this->SAMLProviderName_ != nullptr && this->updateDate_ != nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // SAMLProviderName Field Functions 
    bool hasSAMLProviderName() const { return this->SAMLProviderName_ != nullptr;};
    void deleteSAMLProviderName() { this->SAMLProviderName_ = nullptr;};
    inline string SAMLProviderName() const { DARABONBA_PTR_GET_DEFAULT(SAMLProviderName_, "") };
    inline ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider& setSAMLProviderName(string SAMLProviderName) { DARABONBA_PTR_SET_VALUE(SAMLProviderName_, SAMLProviderName) };


    // updateDate Field Functions 
    bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
    void deleteUpdateDate() { this->updateDate_ = nullptr;};
    inline string updateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
    inline ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the IdP.
    std::shared_ptr<string> arn_ = nullptr;
    // The creation time.
    std::shared_ptr<string> createDate_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the IdP.
    std::shared_ptr<string> SAMLProviderName_ = nullptr;
    // The update time.
    std::shared_ptr<string> updateDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
