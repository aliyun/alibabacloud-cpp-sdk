// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODESTREAMNUMRESPONSEBODYTRANSCODESTREAMCOUNTDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODESTREAMNUMRESPONSEBODYTRANSCODESTREAMCOUNTDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamTranscodeStreamNumResponseBodyTranscodeStreamCountDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamTranscodeStreamNumResponseBodyTranscodeStreamCountDetails& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamTranscodeStreamNumResponseBodyTranscodeStreamCountDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    DescribeLiveStreamTranscodeStreamNumResponseBodyTranscodeStreamCountDetails() = default ;
    DescribeLiveStreamTranscodeStreamNumResponseBodyTranscodeStreamCountDetails(const DescribeLiveStreamTranscodeStreamNumResponseBodyTranscodeStreamCountDetails &) = default ;
    DescribeLiveStreamTranscodeStreamNumResponseBodyTranscodeStreamCountDetails(DescribeLiveStreamTranscodeStreamNumResponseBodyTranscodeStreamCountDetails &&) = default ;
    DescribeLiveStreamTranscodeStreamNumResponseBodyTranscodeStreamCountDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamTranscodeStreamNumResponseBodyTranscodeStreamCountDetails() = default ;
    DescribeLiveStreamTranscodeStreamNumResponseBodyTranscodeStreamCountDetails& operator=(const DescribeLiveStreamTranscodeStreamNumResponseBodyTranscodeStreamCountDetails &) = default ;
    DescribeLiveStreamTranscodeStreamNumResponseBodyTranscodeStreamCountDetails& operator=(DescribeLiveStreamTranscodeStreamNumResponseBodyTranscodeStreamCountDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->template_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeLiveStreamTranscodeStreamNumResponseBodyTranscodeStreamCountDetails& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline DescribeLiveStreamTranscodeStreamNumResponseBodyTranscodeStreamCountDetails& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


  protected:
    // The number of streams that use the transcoding template.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The name of the transcoding template.
    std::shared_ptr<string> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
