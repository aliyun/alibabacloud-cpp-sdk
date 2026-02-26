// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSELECTIONSKUSALEINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSELECTIONSKUSALEINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SkuSaleInfoListQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class ListSelectionSkuSaleInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSelectionSkuSaleInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListSelectionSkuSaleInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListSelectionSkuSaleInfosRequest() = default ;
    ListSelectionSkuSaleInfosRequest(const ListSelectionSkuSaleInfosRequest &) = default ;
    ListSelectionSkuSaleInfosRequest(ListSelectionSkuSaleInfosRequest &&) = default ;
    ListSelectionSkuSaleInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSelectionSkuSaleInfosRequest() = default ;
    ListSelectionSkuSaleInfosRequest& operator=(const ListSelectionSkuSaleInfosRequest &) = default ;
    ListSelectionSkuSaleInfosRequest& operator=(ListSelectionSkuSaleInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SkuSaleInfoListQuery & getBody() const { DARABONBA_PTR_GET_CONST(body_, SkuSaleInfoListQuery) };
    inline SkuSaleInfoListQuery getBody() { DARABONBA_PTR_GET(body_, SkuSaleInfoListQuery) };
    inline ListSelectionSkuSaleInfosRequest& setBody(const SkuSaleInfoListQuery & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListSelectionSkuSaleInfosRequest& setBody(SkuSaleInfoListQuery && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<SkuSaleInfoListQuery> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
