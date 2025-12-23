// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCELOGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCELOGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrStudio20240430
{
namespace Models
{
  class GetInstanceLogResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceLogResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(lineNum, lineNum_);
      DARABONBA_PTR_TO_JSON(message, message_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceLogResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(lineNum, lineNum_);
      DARABONBA_PTR_FROM_JSON(message, message_);
    };
    GetInstanceLogResponseBodyData() = default ;
    GetInstanceLogResponseBodyData(const GetInstanceLogResponseBodyData &) = default ;
    GetInstanceLogResponseBodyData(GetInstanceLogResponseBodyData &&) = default ;
    GetInstanceLogResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceLogResponseBodyData() = default ;
    GetInstanceLogResponseBodyData& operator=(const GetInstanceLogResponseBodyData &) = default ;
    GetInstanceLogResponseBodyData& operator=(GetInstanceLogResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lineNum_ == nullptr
        && return this->message_ == nullptr; };
    // lineNum Field Functions 
    bool hasLineNum() const { return this->lineNum_ != nullptr;};
    void deleteLineNum() { this->lineNum_ = nullptr;};
    inline int64_t lineNum() const { DARABONBA_PTR_GET_DEFAULT(lineNum_, 0L) };
    inline GetInstanceLogResponseBodyData& setLineNum(int64_t lineNum) { DARABONBA_PTR_SET_VALUE(lineNum_, lineNum) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInstanceLogResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    std::shared_ptr<int64_t> lineNum_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrStudio20240430
#endif
