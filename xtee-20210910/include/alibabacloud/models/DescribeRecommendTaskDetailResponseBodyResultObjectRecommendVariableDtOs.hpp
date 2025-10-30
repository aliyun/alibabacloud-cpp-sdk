// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECOMMENDTASKDETAILRESPONSEBODYRESULTOBJECTRECOMMENDVARIABLEDTOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECOMMENDTASKDETAILRESPONSEBODYRESULTOBJECTRECOMMENDVARIABLEDTOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRecommendTaskDetailResponseBodyResultObjectRecommendVariableDTOs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecommendTaskDetailResponseBodyResultObjectRecommendVariableDTOs& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecommendTaskDetailResponseBodyResultObjectRecommendVariableDTOs& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    DescribeRecommendTaskDetailResponseBodyResultObjectRecommendVariableDTOs() = default ;
    DescribeRecommendTaskDetailResponseBodyResultObjectRecommendVariableDTOs(const DescribeRecommendTaskDetailResponseBodyResultObjectRecommendVariableDTOs &) = default ;
    DescribeRecommendTaskDetailResponseBodyResultObjectRecommendVariableDTOs(DescribeRecommendTaskDetailResponseBodyResultObjectRecommendVariableDTOs &&) = default ;
    DescribeRecommendTaskDetailResponseBodyResultObjectRecommendVariableDTOs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecommendTaskDetailResponseBodyResultObjectRecommendVariableDTOs() = default ;
    DescribeRecommendTaskDetailResponseBodyResultObjectRecommendVariableDTOs& operator=(const DescribeRecommendTaskDetailResponseBodyResultObjectRecommendVariableDTOs &) = default ;
    DescribeRecommendTaskDetailResponseBodyResultObjectRecommendVariableDTOs& operator=(DescribeRecommendTaskDetailResponseBodyResultObjectRecommendVariableDTOs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->title_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeRecommendTaskDetailResponseBodyResultObjectRecommendVariableDTOs& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeRecommendTaskDetailResponseBodyResultObjectRecommendVariableDTOs& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // Primary key ID
    std::shared_ptr<int64_t> id_ = nullptr;
    // Title
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
