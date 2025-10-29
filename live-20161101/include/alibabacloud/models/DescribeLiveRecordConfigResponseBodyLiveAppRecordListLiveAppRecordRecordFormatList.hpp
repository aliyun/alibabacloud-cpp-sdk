// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVERECORDCONFIGRESPONSEBODYLIVEAPPRECORDLISTLIVEAPPRECORDRECORDFORMATLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVERECORDCONFIGRESPONSEBODYLIVEAPPRECORDLISTLIVEAPPRECORDRECORDFORMATLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatList& obj) { 
      DARABONBA_PTR_TO_JSON(RecordFormat, recordFormat_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatList& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordFormat, recordFormat_);
    };
    DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatList() = default ;
    DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatList(const DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatList &) = default ;
    DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatList(DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatList &&) = default ;
    DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatList() = default ;
    DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatList& operator=(const DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatList &) = default ;
    DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatList& operator=(DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordFormat_ == nullptr; };
    // recordFormat Field Functions 
    bool hasRecordFormat() const { return this->recordFormat_ != nullptr;};
    void deleteRecordFormat() { this->recordFormat_ = nullptr;};
    inline const vector<Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat> & recordFormat() const { DARABONBA_PTR_GET_CONST(recordFormat_, vector<Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat>) };
    inline vector<Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat> recordFormat() { DARABONBA_PTR_GET(recordFormat_, vector<Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat>) };
    inline DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatList& setRecordFormat(const vector<Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat> & recordFormat) { DARABONBA_PTR_SET_VALUE(recordFormat_, recordFormat) };
    inline DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatList& setRecordFormat(vector<Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat> && recordFormat) { DARABONBA_PTR_SET_RVALUE(recordFormat_, recordFormat) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat>> recordFormat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
