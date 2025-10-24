// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTVIDEOBITRATEBND_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTVIDEOBITRATEBND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListJobResponseBodyJobListJobOutputVideoBitrateBnd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobResponseBodyJobListJobOutputVideoBitrateBnd& obj) { 
      DARABONBA_PTR_TO_JSON(Max, max_);
      DARABONBA_PTR_TO_JSON(Min, min_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobResponseBodyJobListJobOutputVideoBitrateBnd& obj) { 
      DARABONBA_PTR_FROM_JSON(Max, max_);
      DARABONBA_PTR_FROM_JSON(Min, min_);
    };
    ListJobResponseBodyJobListJobOutputVideoBitrateBnd() = default ;
    ListJobResponseBodyJobListJobOutputVideoBitrateBnd(const ListJobResponseBodyJobListJobOutputVideoBitrateBnd &) = default ;
    ListJobResponseBodyJobListJobOutputVideoBitrateBnd(ListJobResponseBodyJobListJobOutputVideoBitrateBnd &&) = default ;
    ListJobResponseBodyJobListJobOutputVideoBitrateBnd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobResponseBodyJobListJobOutputVideoBitrateBnd() = default ;
    ListJobResponseBodyJobListJobOutputVideoBitrateBnd& operator=(const ListJobResponseBodyJobListJobOutputVideoBitrateBnd &) = default ;
    ListJobResponseBodyJobListJobOutputVideoBitrateBnd& operator=(ListJobResponseBodyJobListJobOutputVideoBitrateBnd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->max_ == nullptr
        && return this->min_ == nullptr; };
    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline string max() const { DARABONBA_PTR_GET_DEFAULT(max_, "") };
    inline ListJobResponseBodyJobListJobOutputVideoBitrateBnd& setMax(string max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline string min() const { DARABONBA_PTR_GET_DEFAULT(min_, "") };
    inline ListJobResponseBodyJobListJobOutputVideoBitrateBnd& setMin(string min) { DARABONBA_PTR_SET_VALUE(min_, min) };


  protected:
    // The maximum bitrate. Unit: Kbit/s.
    std::shared_ptr<string> max_ = nullptr;
    // The minimum bitrate. Unit: Kbit/s.
    std::shared_ptr<string> min_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
