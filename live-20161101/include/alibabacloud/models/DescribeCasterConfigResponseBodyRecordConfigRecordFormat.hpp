// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERCONFIGRESPONSEBODYRECORDCONFIGRECORDFORMAT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERCONFIGRESPONSEBODYRECORDCONFIGRECORDFORMAT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterConfigResponseBodyRecordConfigRecordFormat : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterConfigResponseBodyRecordConfigRecordFormat& obj) { 
      DARABONBA_PTR_TO_JSON(RecordFormat, recordFormat_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterConfigResponseBodyRecordConfigRecordFormat& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordFormat, recordFormat_);
    };
    DescribeCasterConfigResponseBodyRecordConfigRecordFormat() = default ;
    DescribeCasterConfigResponseBodyRecordConfigRecordFormat(const DescribeCasterConfigResponseBodyRecordConfigRecordFormat &) = default ;
    DescribeCasterConfigResponseBodyRecordConfigRecordFormat(DescribeCasterConfigResponseBodyRecordConfigRecordFormat &&) = default ;
    DescribeCasterConfigResponseBodyRecordConfigRecordFormat(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterConfigResponseBodyRecordConfigRecordFormat() = default ;
    DescribeCasterConfigResponseBodyRecordConfigRecordFormat& operator=(const DescribeCasterConfigResponseBodyRecordConfigRecordFormat &) = default ;
    DescribeCasterConfigResponseBodyRecordConfigRecordFormat& operator=(DescribeCasterConfigResponseBodyRecordConfigRecordFormat &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->recordFormat_ != nullptr; };
    // recordFormat Field Functions 
    bool hasRecordFormat() const { return this->recordFormat_ != nullptr;};
    void deleteRecordFormat() { this->recordFormat_ = nullptr;};
    inline const vector<Models::DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat> & recordFormat() const { DARABONBA_PTR_GET_CONST(recordFormat_, vector<Models::DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat>) };
    inline vector<Models::DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat> recordFormat() { DARABONBA_PTR_GET(recordFormat_, vector<Models::DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat>) };
    inline DescribeCasterConfigResponseBodyRecordConfigRecordFormat& setRecordFormat(const vector<Models::DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat> & recordFormat) { DARABONBA_PTR_SET_VALUE(recordFormat_, recordFormat) };
    inline DescribeCasterConfigResponseBodyRecordConfigRecordFormat& setRecordFormat(vector<Models::DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat> && recordFormat) { DARABONBA_PTR_SET_RVALUE(recordFormat_, recordFormat) };


  protected:
    std::shared_ptr<vector<Models::DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat>> recordFormat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
