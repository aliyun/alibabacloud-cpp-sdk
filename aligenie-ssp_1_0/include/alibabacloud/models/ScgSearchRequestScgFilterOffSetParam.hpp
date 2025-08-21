// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCGSEARCHREQUESTSCGFILTEROFFSETPARAM_HPP_
#define ALIBABACLOUD_MODELS_SCGSEARCHREQUESTSCGFILTEROFFSETPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ScgSearchRequestScgFilterOffSetParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScgSearchRequestScgFilterOffSetParam& obj) { 
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
    };
    friend void from_json(const Darabonba::Json& j, ScgSearchRequestScgFilterOffSetParam& obj) { 
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
    };
    ScgSearchRequestScgFilterOffSetParam() = default ;
    ScgSearchRequestScgFilterOffSetParam(const ScgSearchRequestScgFilterOffSetParam &) = default ;
    ScgSearchRequestScgFilterOffSetParam(ScgSearchRequestScgFilterOffSetParam &&) = default ;
    ScgSearchRequestScgFilterOffSetParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScgSearchRequestScgFilterOffSetParam() = default ;
    ScgSearchRequestScgFilterOffSetParam& operator=(const ScgSearchRequestScgFilterOffSetParam &) = default ;
    ScgSearchRequestScgFilterOffSetParam& operator=(ScgSearchRequestScgFilterOffSetParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->limit_ != nullptr
        && this->offset_ != nullptr; };
    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ScgSearchRequestScgFilterOffSetParam& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline ScgSearchRequestScgFilterOffSetParam& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


  protected:
    std::shared_ptr<int32_t> limit_ = nullptr;
    std::shared_ptr<int32_t> offset_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
