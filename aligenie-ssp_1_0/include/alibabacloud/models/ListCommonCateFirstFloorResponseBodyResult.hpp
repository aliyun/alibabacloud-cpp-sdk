// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMMONCATEFIRSTFLOORRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMMONCATEFIRSTFLOORRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListCommonCateFirstFloorResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCommonCateFirstFloorResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(CateId, cateId_);
      DARABONBA_PTR_TO_JSON(CateName, cateName_);
      DARABONBA_PTR_TO_JSON(ParentCateId, parentCateId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCommonCateFirstFloorResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CateId, cateId_);
      DARABONBA_PTR_FROM_JSON(CateName, cateName_);
      DARABONBA_PTR_FROM_JSON(ParentCateId, parentCateId_);
    };
    ListCommonCateFirstFloorResponseBodyResult() = default ;
    ListCommonCateFirstFloorResponseBodyResult(const ListCommonCateFirstFloorResponseBodyResult &) = default ;
    ListCommonCateFirstFloorResponseBodyResult(ListCommonCateFirstFloorResponseBodyResult &&) = default ;
    ListCommonCateFirstFloorResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCommonCateFirstFloorResponseBodyResult() = default ;
    ListCommonCateFirstFloorResponseBodyResult& operator=(const ListCommonCateFirstFloorResponseBodyResult &) = default ;
    ListCommonCateFirstFloorResponseBodyResult& operator=(ListCommonCateFirstFloorResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cateId_ != nullptr
        && this->cateName_ != nullptr && this->parentCateId_ != nullptr; };
    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t cateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline ListCommonCateFirstFloorResponseBodyResult& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // cateName Field Functions 
    bool hasCateName() const { return this->cateName_ != nullptr;};
    void deleteCateName() { this->cateName_ = nullptr;};
    inline string cateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
    inline ListCommonCateFirstFloorResponseBodyResult& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


    // parentCateId Field Functions 
    bool hasParentCateId() const { return this->parentCateId_ != nullptr;};
    void deleteParentCateId() { this->parentCateId_ = nullptr;};
    inline int64_t parentCateId() const { DARABONBA_PTR_GET_DEFAULT(parentCateId_, 0L) };
    inline ListCommonCateFirstFloorResponseBodyResult& setParentCateId(int64_t parentCateId) { DARABONBA_PTR_SET_VALUE(parentCateId_, parentCateId) };


  protected:
    std::shared_ptr<int64_t> cateId_ = nullptr;
    std::shared_ptr<string> cateName_ = nullptr;
    std::shared_ptr<int64_t> parentCateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
