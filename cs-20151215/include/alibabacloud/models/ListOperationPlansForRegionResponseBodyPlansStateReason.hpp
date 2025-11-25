// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONPLANSFORREGIONRESPONSEBODYPLANSSTATEREASON_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONPLANSFORREGIONRESPONSEBODYPLANSSTATEREASON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListOperationPlansForRegionResponseBodyPlansStateReason : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationPlansForRegionResponseBodyPlansStateReason& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationPlansForRegionResponseBodyPlansStateReason& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
    };
    ListOperationPlansForRegionResponseBodyPlansStateReason() = default ;
    ListOperationPlansForRegionResponseBodyPlansStateReason(const ListOperationPlansForRegionResponseBodyPlansStateReason &) = default ;
    ListOperationPlansForRegionResponseBodyPlansStateReason(ListOperationPlansForRegionResponseBodyPlansStateReason &&) = default ;
    ListOperationPlansForRegionResponseBodyPlansStateReason(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationPlansForRegionResponseBodyPlansStateReason() = default ;
    ListOperationPlansForRegionResponseBodyPlansStateReason& operator=(const ListOperationPlansForRegionResponseBodyPlansStateReason &) = default ;
    ListOperationPlansForRegionResponseBodyPlansStateReason& operator=(ListOperationPlansForRegionResponseBodyPlansStateReason &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListOperationPlansForRegionResponseBodyPlansStateReason& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListOperationPlansForRegionResponseBodyPlansStateReason& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
