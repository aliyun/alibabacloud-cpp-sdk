// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMMONCATESECONDFLOORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMMONCATESECONDFLOORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListCommonCateSecondFloorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCommonCateSecondFloorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ParentCateId, parentCateId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCommonCateSecondFloorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ParentCateId, parentCateId_);
    };
    ListCommonCateSecondFloorRequest() = default ;
    ListCommonCateSecondFloorRequest(const ListCommonCateSecondFloorRequest &) = default ;
    ListCommonCateSecondFloorRequest(ListCommonCateSecondFloorRequest &&) = default ;
    ListCommonCateSecondFloorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCommonCateSecondFloorRequest() = default ;
    ListCommonCateSecondFloorRequest& operator=(const ListCommonCateSecondFloorRequest &) = default ;
    ListCommonCateSecondFloorRequest& operator=(ListCommonCateSecondFloorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parentCateId_ != nullptr; };
    // parentCateId Field Functions 
    bool hasParentCateId() const { return this->parentCateId_ != nullptr;};
    void deleteParentCateId() { this->parentCateId_ = nullptr;};
    inline int64_t parentCateId() const { DARABONBA_PTR_GET_DEFAULT(parentCateId_, 0L) };
    inline ListCommonCateSecondFloorRequest& setParentCateId(int64_t parentCateId) { DARABONBA_PTR_SET_VALUE(parentCateId_, parentCateId) };


  protected:
    std::shared_ptr<int64_t> parentCateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
