// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUERYPROCESSORSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUERYPROCESSORSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListQueryProcessorsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueryProcessorsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(isActive, isActive_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueryProcessorsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(isActive, isActive_);
    };
    ListQueryProcessorsRequest() = default ;
    ListQueryProcessorsRequest(const ListQueryProcessorsRequest &) = default ;
    ListQueryProcessorsRequest(ListQueryProcessorsRequest &&) = default ;
    ListQueryProcessorsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueryProcessorsRequest() = default ;
    ListQueryProcessorsRequest& operator=(const ListQueryProcessorsRequest &) = default ;
    ListQueryProcessorsRequest& operator=(ListQueryProcessorsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isActive_ == nullptr; };
    // isActive Field Functions 
    bool hasIsActive() const { return this->isActive_ != nullptr;};
    void deleteIsActive() { this->isActive_ = nullptr;};
    inline int32_t isActive() const { DARABONBA_PTR_GET_DEFAULT(isActive_, 0) };
    inline ListQueryProcessorsRequest& setIsActive(int32_t isActive) { DARABONBA_PTR_SET_VALUE(isActive_, isActive) };


  protected:
    // The scope of query analysis rules to be queried. Default value: 0. Valid values:
    // 
    // *   0: queries all query analysis rules.
    // *   1: queries the default query analysis rules.
    // *   2: queries the query analysis rules that are not the default rules.
    std::shared_ptr<int32_t> isActive_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
