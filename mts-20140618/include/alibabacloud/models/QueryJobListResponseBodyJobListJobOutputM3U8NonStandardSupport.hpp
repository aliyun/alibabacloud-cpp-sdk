// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTM3U8NONSTANDARDSUPPORT_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTM3U8NONSTANDARDSUPPORT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupportTS.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupport : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupport& obj) { 
      DARABONBA_PTR_TO_JSON(TS, TS_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupport& obj) { 
      DARABONBA_PTR_FROM_JSON(TS, TS_);
    };
    QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupport() = default ;
    QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupport(const QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupport &) = default ;
    QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupport(QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupport &&) = default ;
    QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupport(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupport() = default ;
    QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupport& operator=(const QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupport &) = default ;
    QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupport& operator=(QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupport &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->TS_ == nullptr; };
    // TS Field Functions 
    bool hasTS() const { return this->TS_ != nullptr;};
    void deleteTS() { this->TS_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupportTS & TS() const { DARABONBA_PTR_GET_CONST(TS_, Models::QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupportTS) };
    inline Models::QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupportTS TS() { DARABONBA_PTR_GET(TS_, Models::QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupportTS) };
    inline QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupport& setTS(const Models::QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupportTS & TS) { DARABONBA_PTR_SET_VALUE(TS_, TS) };
    inline QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupport& setTS(Models::QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupportTS && TS) { DARABONBA_PTR_SET_RVALUE(TS_, TS) };


  protected:
    // The non-standard support configurations for TS files. The value is a JSON object. For more information, see the TS section of the [Parameter details](https://help.aliyun.com/document_detail/29253.html) topic.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupportTS> TS_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
