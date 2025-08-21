// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODYHEADERS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODYHEADERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListInstanceResponseBodyHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceResponseBodyHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(X-Total-Count, xTotalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceResponseBodyHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(X-Total-Count, xTotalCount_);
    };
    ListInstanceResponseBodyHeaders() = default ;
    ListInstanceResponseBodyHeaders(const ListInstanceResponseBodyHeaders &) = default ;
    ListInstanceResponseBodyHeaders(ListInstanceResponseBodyHeaders &&) = default ;
    ListInstanceResponseBodyHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceResponseBodyHeaders() = default ;
    ListInstanceResponseBodyHeaders& operator=(const ListInstanceResponseBodyHeaders &) = default ;
    ListInstanceResponseBodyHeaders& operator=(ListInstanceResponseBodyHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->xTotalCount_ != nullptr; };
    // xTotalCount Field Functions 
    bool hasXTotalCount() const { return this->xTotalCount_ != nullptr;};
    void deleteXTotalCount() { this->xTotalCount_ = nullptr;};
    inline int32_t xTotalCount() const { DARABONBA_PTR_GET_DEFAULT(xTotalCount_, 0) };
    inline ListInstanceResponseBodyHeaders& setXTotalCount(int32_t xTotalCount) { DARABONBA_PTR_SET_VALUE(xTotalCount_, xTotalCount) };


  protected:
    // Specifies whether to include dedicated master nodes (obsolete). Valid values:
    // 
    // *   true: The files contain data that is dumped to the IA storage medium.
    // *   false: The files do not contain data that is dumped to the IA storage medium.
    std::shared_ptr<int32_t> xTotalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
