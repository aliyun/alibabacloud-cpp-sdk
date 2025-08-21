// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTECSINSTANCESRESPONSEBODYHEADERS_HPP_
#define ALIBABACLOUD_MODELS_LISTECSINSTANCESRESPONSEBODYHEADERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListEcsInstancesResponseBodyHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEcsInstancesResponseBodyHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(X-Total-Count, xTotalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListEcsInstancesResponseBodyHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(X-Total-Count, xTotalCount_);
    };
    ListEcsInstancesResponseBodyHeaders() = default ;
    ListEcsInstancesResponseBodyHeaders(const ListEcsInstancesResponseBodyHeaders &) = default ;
    ListEcsInstancesResponseBodyHeaders(ListEcsInstancesResponseBodyHeaders &&) = default ;
    ListEcsInstancesResponseBodyHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEcsInstancesResponseBodyHeaders() = default ;
    ListEcsInstancesResponseBodyHeaders& operator=(const ListEcsInstancesResponseBodyHeaders &) = default ;
    ListEcsInstancesResponseBodyHeaders& operator=(ListEcsInstancesResponseBodyHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->xTotalCount_ != nullptr; };
    // xTotalCount Field Functions 
    bool hasXTotalCount() const { return this->xTotalCount_ != nullptr;};
    void deleteXTotalCount() { this->xTotalCount_ = nullptr;};
    inline int32_t xTotalCount() const { DARABONBA_PTR_GET_DEFAULT(xTotalCount_, 0) };
    inline ListEcsInstancesResponseBodyHeaders& setXTotalCount(int32_t xTotalCount) { DARABONBA_PTR_SET_VALUE(xTotalCount_, xTotalCount) };


  protected:
    // The returned data.
    std::shared_ptr<int32_t> xTotalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
