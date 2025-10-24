// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTM3U8NONSTANDARDSUPPORT_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTM3U8NONSTANDARDSUPPORT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputM3U8NonStandardSupportTS.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListJobResponseBodyJobListJobOutputM3U8NonStandardSupport : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobResponseBodyJobListJobOutputM3U8NonStandardSupport& obj) { 
      DARABONBA_PTR_TO_JSON(TS, TS_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobResponseBodyJobListJobOutputM3U8NonStandardSupport& obj) { 
      DARABONBA_PTR_FROM_JSON(TS, TS_);
    };
    ListJobResponseBodyJobListJobOutputM3U8NonStandardSupport() = default ;
    ListJobResponseBodyJobListJobOutputM3U8NonStandardSupport(const ListJobResponseBodyJobListJobOutputM3U8NonStandardSupport &) = default ;
    ListJobResponseBodyJobListJobOutputM3U8NonStandardSupport(ListJobResponseBodyJobListJobOutputM3U8NonStandardSupport &&) = default ;
    ListJobResponseBodyJobListJobOutputM3U8NonStandardSupport(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobResponseBodyJobListJobOutputM3U8NonStandardSupport() = default ;
    ListJobResponseBodyJobListJobOutputM3U8NonStandardSupport& operator=(const ListJobResponseBodyJobListJobOutputM3U8NonStandardSupport &) = default ;
    ListJobResponseBodyJobListJobOutputM3U8NonStandardSupport& operator=(ListJobResponseBodyJobListJobOutputM3U8NonStandardSupport &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->TS_ == nullptr; };
    // TS Field Functions 
    bool hasTS() const { return this->TS_ != nullptr;};
    void deleteTS() { this->TS_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputM3U8NonStandardSupportTS & TS() const { DARABONBA_PTR_GET_CONST(TS_, Models::ListJobResponseBodyJobListJobOutputM3U8NonStandardSupportTS) };
    inline Models::ListJobResponseBodyJobListJobOutputM3U8NonStandardSupportTS TS() { DARABONBA_PTR_GET(TS_, Models::ListJobResponseBodyJobListJobOutputM3U8NonStandardSupportTS) };
    inline ListJobResponseBodyJobListJobOutputM3U8NonStandardSupport& setTS(const Models::ListJobResponseBodyJobListJobOutputM3U8NonStandardSupportTS & TS) { DARABONBA_PTR_SET_VALUE(TS_, TS) };
    inline ListJobResponseBodyJobListJobOutputM3U8NonStandardSupport& setTS(Models::ListJobResponseBodyJobListJobOutputM3U8NonStandardSupportTS && TS) { DARABONBA_PTR_SET_RVALUE(TS_, TS) };


  protected:
    // The non-standard support configurations for TS files. The value is a JSON object. For more information, see [Parameter details](https://help.aliyun.com/document_detail/29253.html).
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputM3U8NonStandardSupportTS> TS_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
