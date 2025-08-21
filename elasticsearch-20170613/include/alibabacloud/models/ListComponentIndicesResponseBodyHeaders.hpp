// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTINDICESRESPONSEBODYHEADERS_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTINDICESRESPONSEBODYHEADERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListComponentIndicesResponseBodyHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentIndicesResponseBodyHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(X-Total-Count, xTotalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentIndicesResponseBodyHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(X-Total-Count, xTotalCount_);
    };
    ListComponentIndicesResponseBodyHeaders() = default ;
    ListComponentIndicesResponseBodyHeaders(const ListComponentIndicesResponseBodyHeaders &) = default ;
    ListComponentIndicesResponseBodyHeaders(ListComponentIndicesResponseBodyHeaders &&) = default ;
    ListComponentIndicesResponseBodyHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentIndicesResponseBodyHeaders() = default ;
    ListComponentIndicesResponseBodyHeaders& operator=(const ListComponentIndicesResponseBodyHeaders &) = default ;
    ListComponentIndicesResponseBodyHeaders& operator=(ListComponentIndicesResponseBodyHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->xTotalCount_ != nullptr; };
    // xTotalCount Field Functions 
    bool hasXTotalCount() const { return this->xTotalCount_ != nullptr;};
    void deleteXTotalCount() { this->xTotalCount_ = nullptr;};
    inline int64_t xTotalCount() const { DARABONBA_PTR_GET_DEFAULT(xTotalCount_, 0L) };
    inline ListComponentIndicesResponseBodyHeaders& setXTotalCount(int64_t xTotalCount) { DARABONBA_PTR_SET_VALUE(xTotalCount_, xTotalCount) };


  protected:
    std::shared_ptr<int64_t> xTotalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
