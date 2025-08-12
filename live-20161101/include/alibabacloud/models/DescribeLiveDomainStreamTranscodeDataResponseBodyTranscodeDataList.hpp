// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINSTREAMTRANSCODEDATARESPONSEBODYTRANSCODEDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINSTREAMTRANSCODEDATARESPONSEBODYTRANSCODEDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataList& obj) { 
      DARABONBA_PTR_TO_JSON(TranscodeData, transcodeData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(TranscodeData, transcodeData_);
    };
    DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataList() = default ;
    DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataList(const DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataList &) = default ;
    DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataList(DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataList &&) = default ;
    DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataList() = default ;
    DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataList& operator=(const DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataList &) = default ;
    DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataList& operator=(DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->transcodeData_ != nullptr; };
    // transcodeData Field Functions 
    bool hasTranscodeData() const { return this->transcodeData_ != nullptr;};
    void deleteTranscodeData() { this->transcodeData_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData> & transcodeData() const { DARABONBA_PTR_GET_CONST(transcodeData_, vector<Models::DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData>) };
    inline vector<Models::DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData> transcodeData() { DARABONBA_PTR_GET(transcodeData_, vector<Models::DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData>) };
    inline DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataList& setTranscodeData(const vector<Models::DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData> & transcodeData) { DARABONBA_PTR_SET_VALUE(transcodeData_, transcodeData) };
    inline DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataList& setTranscodeData(vector<Models::DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData> && transcodeData) { DARABONBA_PTR_SET_RVALUE(transcodeData_, transcodeData) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData>> transcodeData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
