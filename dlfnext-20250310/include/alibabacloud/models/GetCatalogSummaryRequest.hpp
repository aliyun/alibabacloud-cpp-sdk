// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCATALOGSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCATALOGSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class GetCatalogSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCatalogSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(date, date_);
    };
    friend void from_json(const Darabonba::Json& j, GetCatalogSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(date, date_);
    };
    GetCatalogSummaryRequest() = default ;
    GetCatalogSummaryRequest(const GetCatalogSummaryRequest &) = default ;
    GetCatalogSummaryRequest(GetCatalogSummaryRequest &&) = default ;
    GetCatalogSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCatalogSummaryRequest() = default ;
    GetCatalogSummaryRequest& operator=(const GetCatalogSummaryRequest &) = default ;
    GetCatalogSummaryRequest& operator=(GetCatalogSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->date_ != nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline GetCatalogSummaryRequest& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


  protected:
    std::shared_ptr<string> date_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
