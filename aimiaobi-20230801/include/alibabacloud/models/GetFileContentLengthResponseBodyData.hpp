// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILECONTENTLENGTHRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETFILECONTENTLENGTHRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetFileContentLengthResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileContentLengthResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(WordNum, wordNum_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileContentLengthResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(WordNum, wordNum_);
    };
    GetFileContentLengthResponseBodyData() = default ;
    GetFileContentLengthResponseBodyData(const GetFileContentLengthResponseBodyData &) = default ;
    GetFileContentLengthResponseBodyData(GetFileContentLengthResponseBodyData &&) = default ;
    GetFileContentLengthResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileContentLengthResponseBodyData() = default ;
    GetFileContentLengthResponseBodyData& operator=(const GetFileContentLengthResponseBodyData &) = default ;
    GetFileContentLengthResponseBodyData& operator=(GetFileContentLengthResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->wordNum_ != nullptr; };
    // wordNum Field Functions 
    bool hasWordNum() const { return this->wordNum_ != nullptr;};
    void deleteWordNum() { this->wordNum_ = nullptr;};
    inline int64_t wordNum() const { DARABONBA_PTR_GET_DEFAULT(wordNum_, 0L) };
    inline GetFileContentLengthResponseBodyData& setWordNum(int64_t wordNum) { DARABONBA_PTR_SET_VALUE(wordNum_, wordNum) };


  protected:
    std::shared_ptr<int64_t> wordNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
