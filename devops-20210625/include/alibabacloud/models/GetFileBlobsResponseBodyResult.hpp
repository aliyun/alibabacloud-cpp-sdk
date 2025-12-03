// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEBLOBSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETFILEBLOBSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetFileBlobsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileBlobsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(totalLines, totalLines_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileBlobsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(totalLines, totalLines_);
    };
    GetFileBlobsResponseBodyResult() = default ;
    GetFileBlobsResponseBodyResult(const GetFileBlobsResponseBodyResult &) = default ;
    GetFileBlobsResponseBodyResult(GetFileBlobsResponseBodyResult &&) = default ;
    GetFileBlobsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileBlobsResponseBodyResult() = default ;
    GetFileBlobsResponseBodyResult& operator=(const GetFileBlobsResponseBodyResult &) = default ;
    GetFileBlobsResponseBodyResult& operator=(GetFileBlobsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->size_ == nullptr && return this->totalLines_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetFileBlobsResponseBodyResult& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline GetFileBlobsResponseBodyResult& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // totalLines Field Functions 
    bool hasTotalLines() const { return this->totalLines_ != nullptr;};
    void deleteTotalLines() { this->totalLines_ = nullptr;};
    inline int32_t totalLines() const { DARABONBA_PTR_GET_DEFAULT(totalLines_, 0) };
    inline GetFileBlobsResponseBodyResult& setTotalLines(int32_t totalLines) { DARABONBA_PTR_SET_VALUE(totalLines_, totalLines) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<int64_t> size_ = nullptr;
    std::shared_ptr<int32_t> totalLines_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
