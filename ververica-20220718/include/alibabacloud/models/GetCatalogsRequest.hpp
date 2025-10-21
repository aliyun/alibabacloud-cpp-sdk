// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCATALOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCATALOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class GetCatalogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCatalogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(catalogName, catalogName_);
    };
    friend void from_json(const Darabonba::Json& j, GetCatalogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(catalogName, catalogName_);
    };
    GetCatalogsRequest() = default ;
    GetCatalogsRequest(const GetCatalogsRequest &) = default ;
    GetCatalogsRequest(GetCatalogsRequest &&) = default ;
    GetCatalogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCatalogsRequest() = default ;
    GetCatalogsRequest& operator=(const GetCatalogsRequest &) = default ;
    GetCatalogsRequest& operator=(GetCatalogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogName_ == nullptr; };
    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string catalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline GetCatalogsRequest& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


  protected:
    std::shared_ptr<string> catalogName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
