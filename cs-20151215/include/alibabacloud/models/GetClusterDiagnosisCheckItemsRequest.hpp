// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERDIAGNOSISCHECKITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERDIAGNOSISCHECKITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class GetClusterDiagnosisCheckItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterDiagnosisCheckItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(language, language_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterDiagnosisCheckItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(language, language_);
    };
    GetClusterDiagnosisCheckItemsRequest() = default ;
    GetClusterDiagnosisCheckItemsRequest(const GetClusterDiagnosisCheckItemsRequest &) = default ;
    GetClusterDiagnosisCheckItemsRequest(GetClusterDiagnosisCheckItemsRequest &&) = default ;
    GetClusterDiagnosisCheckItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterDiagnosisCheckItemsRequest() = default ;
    GetClusterDiagnosisCheckItemsRequest& operator=(const GetClusterDiagnosisCheckItemsRequest &) = default ;
    GetClusterDiagnosisCheckItemsRequest& operator=(GetClusterDiagnosisCheckItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->language_ != nullptr; };
    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline GetClusterDiagnosisCheckItemsRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


  protected:
    // The query language.
    std::shared_ptr<string> language_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
