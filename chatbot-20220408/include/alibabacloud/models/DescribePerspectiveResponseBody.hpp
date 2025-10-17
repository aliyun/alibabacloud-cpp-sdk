// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPERSPECTIVERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPERSPECTIVERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class DescribePerspectiveResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePerspectiveResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PerspectiveCode, perspectiveCode_);
      DARABONBA_PTR_TO_JSON(PerspectiveId, perspectiveId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SelfDefine, selfDefine_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePerspectiveResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PerspectiveCode, perspectiveCode_);
      DARABONBA_PTR_FROM_JSON(PerspectiveId, perspectiveId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SelfDefine, selfDefine_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribePerspectiveResponseBody() = default ;
    DescribePerspectiveResponseBody(const DescribePerspectiveResponseBody &) = default ;
    DescribePerspectiveResponseBody(DescribePerspectiveResponseBody &&) = default ;
    DescribePerspectiveResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePerspectiveResponseBody() = default ;
    DescribePerspectiveResponseBody& operator=(const DescribePerspectiveResponseBody &) = default ;
    DescribePerspectiveResponseBody& operator=(DescribePerspectiveResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->modifyTime_ == nullptr && return this->name_ == nullptr && return this->perspectiveCode_ == nullptr && return this->perspectiveId_ == nullptr && return this->requestId_ == nullptr
        && return this->selfDefine_ == nullptr && return this->status_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribePerspectiveResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribePerspectiveResponseBody& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePerspectiveResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // perspectiveCode Field Functions 
    bool hasPerspectiveCode() const { return this->perspectiveCode_ != nullptr;};
    void deletePerspectiveCode() { this->perspectiveCode_ = nullptr;};
    inline string perspectiveCode() const { DARABONBA_PTR_GET_DEFAULT(perspectiveCode_, "") };
    inline DescribePerspectiveResponseBody& setPerspectiveCode(string perspectiveCode) { DARABONBA_PTR_SET_VALUE(perspectiveCode_, perspectiveCode) };


    // perspectiveId Field Functions 
    bool hasPerspectiveId() const { return this->perspectiveId_ != nullptr;};
    void deletePerspectiveId() { this->perspectiveId_ = nullptr;};
    inline string perspectiveId() const { DARABONBA_PTR_GET_DEFAULT(perspectiveId_, "") };
    inline DescribePerspectiveResponseBody& setPerspectiveId(string perspectiveId) { DARABONBA_PTR_SET_VALUE(perspectiveId_, perspectiveId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePerspectiveResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // selfDefine Field Functions 
    bool hasSelfDefine() const { return this->selfDefine_ != nullptr;};
    void deleteSelfDefine() { this->selfDefine_ = nullptr;};
    inline bool selfDefine() const { DARABONBA_PTR_GET_DEFAULT(selfDefine_, false) };
    inline DescribePerspectiveResponseBody& setSelfDefine(bool selfDefine) { DARABONBA_PTR_SET_VALUE(selfDefine_, selfDefine) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribePerspectiveResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> perspectiveCode_ = nullptr;
    std::shared_ptr<string> perspectiveId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> selfDefine_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
