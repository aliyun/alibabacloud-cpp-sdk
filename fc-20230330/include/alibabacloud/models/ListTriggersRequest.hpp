// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRIGGERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRIGGERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListTriggersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTriggersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(limit, limit_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(prefix, prefix_);
    };
    friend void from_json(const Darabonba::Json& j, ListTriggersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(limit, limit_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(prefix, prefix_);
    };
    ListTriggersRequest() = default ;
    ListTriggersRequest(const ListTriggersRequest &) = default ;
    ListTriggersRequest(ListTriggersRequest &&) = default ;
    ListTriggersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTriggersRequest() = default ;
    ListTriggersRequest& operator=(const ListTriggersRequest &) = default ;
    ListTriggersRequest& operator=(ListTriggersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->limit_ == nullptr
        && return this->nextToken_ == nullptr && return this->prefix_ == nullptr; };
    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListTriggersRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTriggersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline ListTriggersRequest& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


  protected:
    // The number of triggers returned.
    std::shared_ptr<int32_t> limit_ = nullptr;
    // The token for the next page.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The trigger name prefix.
    std::shared_ptr<string> prefix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
