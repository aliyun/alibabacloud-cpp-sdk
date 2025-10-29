// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDLIKERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_SENDLIKERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SendLikeResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendLikeResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(LikeCount, likeCount_);
    };
    friend void from_json(const Darabonba::Json& j, SendLikeResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(LikeCount, likeCount_);
    };
    SendLikeResponseBodyResult() = default ;
    SendLikeResponseBodyResult(const SendLikeResponseBodyResult &) = default ;
    SendLikeResponseBodyResult(SendLikeResponseBodyResult &&) = default ;
    SendLikeResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendLikeResponseBodyResult() = default ;
    SendLikeResponseBodyResult& operator=(const SendLikeResponseBodyResult &) = default ;
    SendLikeResponseBodyResult& operator=(SendLikeResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->likeCount_ == nullptr; };
    // likeCount Field Functions 
    bool hasLikeCount() const { return this->likeCount_ != nullptr;};
    void deleteLikeCount() { this->likeCount_ = nullptr;};
    inline int32_t likeCount() const { DARABONBA_PTR_GET_DEFAULT(likeCount_, 0) };
    inline SendLikeResponseBodyResult& setLikeCount(int32_t likeCount) { DARABONBA_PTR_SET_VALUE(likeCount_, likeCount) };


  protected:
    // The number of likes.
    std::shared_ptr<int32_t> likeCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
