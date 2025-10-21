// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICRESPONSEBODYTOPICEXAMPLEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICRESPONSEBODYTOPICEXAMPLEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class GetTopicResponseBodyTopicExampleInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicResponseBodyTopicExampleInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ExampleId, exampleId_);
      DARABONBA_PTR_TO_JSON(ExampleType, exampleType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicResponseBodyTopicExampleInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ExampleId, exampleId_);
      DARABONBA_PTR_FROM_JSON(ExampleType, exampleType_);
    };
    GetTopicResponseBodyTopicExampleInfoList() = default ;
    GetTopicResponseBodyTopicExampleInfoList(const GetTopicResponseBodyTopicExampleInfoList &) = default ;
    GetTopicResponseBodyTopicExampleInfoList(GetTopicResponseBodyTopicExampleInfoList &&) = default ;
    GetTopicResponseBodyTopicExampleInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicResponseBodyTopicExampleInfoList() = default ;
    GetTopicResponseBodyTopicExampleInfoList& operator=(const GetTopicResponseBodyTopicExampleInfoList &) = default ;
    GetTopicResponseBodyTopicExampleInfoList& operator=(GetTopicResponseBodyTopicExampleInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->exampleId_ == nullptr && return this->exampleType_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetTopicResponseBodyTopicExampleInfoList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // exampleId Field Functions 
    bool hasExampleId() const { return this->exampleId_ != nullptr;};
    void deleteExampleId() { this->exampleId_ = nullptr;};
    inline int64_t exampleId() const { DARABONBA_PTR_GET_DEFAULT(exampleId_, 0L) };
    inline GetTopicResponseBodyTopicExampleInfoList& setExampleId(int64_t exampleId) { DARABONBA_PTR_SET_VALUE(exampleId_, exampleId) };


    // exampleType Field Functions 
    bool hasExampleType() const { return this->exampleType_ != nullptr;};
    void deleteExampleType() { this->exampleType_ = nullptr;};
    inline int32_t exampleType() const { DARABONBA_PTR_GET_DEFAULT(exampleType_, 0) };
    inline GetTopicResponseBodyTopicExampleInfoList& setExampleType(int32_t exampleType) { DARABONBA_PTR_SET_VALUE(exampleType_, exampleType) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<int64_t> exampleId_ = nullptr;
    std::shared_ptr<int32_t> exampleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
