// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECOMMENDCONTENTREQUESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRECOMMENDCONTENTREQUESTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListRecommendContentRequestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecommendContentRequestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecommendContentRequestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListRecommendContentRequestRequest() = default ;
    ListRecommendContentRequestRequest(const ListRecommendContentRequestRequest &) = default ;
    ListRecommendContentRequestRequest(ListRecommendContentRequestRequest &&) = default ;
    ListRecommendContentRequestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecommendContentRequestRequest() = default ;
    ListRecommendContentRequestRequest& operator=(const ListRecommendContentRequestRequest &) = default ;
    ListRecommendContentRequestRequest& operator=(ListRecommendContentRequestRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->type_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListRecommendContentRequestRequest& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListRecommendContentRequestRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
