// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTM3U8NONSTANDARDSUPPORTTS_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTM3U8NONSTANDARDSUPPORTTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupportTS : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupportTS& obj) { 
      DARABONBA_PTR_TO_JSON(Md5Support, md5Support_);
      DARABONBA_PTR_TO_JSON(SizeSupport, sizeSupport_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupportTS& obj) { 
      DARABONBA_PTR_FROM_JSON(Md5Support, md5Support_);
      DARABONBA_PTR_FROM_JSON(SizeSupport, sizeSupport_);
    };
    QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupportTS() = default ;
    QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupportTS(const QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupportTS &) = default ;
    QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupportTS(QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupportTS &&) = default ;
    QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupportTS(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupportTS() = default ;
    QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupportTS& operator=(const QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupportTS &) = default ;
    QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupportTS& operator=(QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupportTS &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->md5Support_ == nullptr
        && return this->sizeSupport_ == nullptr; };
    // md5Support Field Functions 
    bool hasMd5Support() const { return this->md5Support_ != nullptr;};
    void deleteMd5Support() { this->md5Support_ = nullptr;};
    inline bool md5Support() const { DARABONBA_PTR_GET_DEFAULT(md5Support_, false) };
    inline QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupportTS& setMd5Support(bool md5Support) { DARABONBA_PTR_SET_VALUE(md5Support_, md5Support) };


    // sizeSupport Field Functions 
    bool hasSizeSupport() const { return this->sizeSupport_ != nullptr;};
    void deleteSizeSupport() { this->sizeSupport_ = nullptr;};
    inline bool sizeSupport() const { DARABONBA_PTR_GET_DEFAULT(sizeSupport_, false) };
    inline QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupportTS& setSizeSupport(bool sizeSupport) { DARABONBA_PTR_SET_VALUE(sizeSupport_, sizeSupport) };


  protected:
    // Indicates whether the output of the MD5 value of the TS file is supported in the M3U8 file. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> md5Support_ = nullptr;
    // Indicates whether the output of the size of the TS file is supported in the M3U8 file. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> sizeSupport_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
