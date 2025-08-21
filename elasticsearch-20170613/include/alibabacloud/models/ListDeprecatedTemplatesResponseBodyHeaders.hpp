// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPRECATEDTEMPLATESRESPONSEBODYHEADERS_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPRECATEDTEMPLATESRESPONSEBODYHEADERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDeprecatedTemplatesResponseBodyHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeprecatedTemplatesResponseBodyHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(X-Total-Count, xTotalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeprecatedTemplatesResponseBodyHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(X-Total-Count, xTotalCount_);
    };
    ListDeprecatedTemplatesResponseBodyHeaders() = default ;
    ListDeprecatedTemplatesResponseBodyHeaders(const ListDeprecatedTemplatesResponseBodyHeaders &) = default ;
    ListDeprecatedTemplatesResponseBodyHeaders(ListDeprecatedTemplatesResponseBodyHeaders &&) = default ;
    ListDeprecatedTemplatesResponseBodyHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeprecatedTemplatesResponseBodyHeaders() = default ;
    ListDeprecatedTemplatesResponseBodyHeaders& operator=(const ListDeprecatedTemplatesResponseBodyHeaders &) = default ;
    ListDeprecatedTemplatesResponseBodyHeaders& operator=(ListDeprecatedTemplatesResponseBodyHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->xTotalCount_ != nullptr; };
    // xTotalCount Field Functions 
    bool hasXTotalCount() const { return this->xTotalCount_ != nullptr;};
    void deleteXTotalCount() { this->xTotalCount_ = nullptr;};
    inline int64_t xTotalCount() const { DARABONBA_PTR_GET_DEFAULT(xTotalCount_, 0L) };
    inline ListDeprecatedTemplatesResponseBodyHeaders& setXTotalCount(int64_t xTotalCount) { DARABONBA_PTR_SET_VALUE(xTotalCount_, xTotalCount) };


  protected:
    std::shared_ptr<int64_t> xTotalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
