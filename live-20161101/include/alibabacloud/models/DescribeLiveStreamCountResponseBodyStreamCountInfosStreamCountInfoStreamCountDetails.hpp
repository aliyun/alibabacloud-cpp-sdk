// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMCOUNTRESPONSEBODYSTREAMCOUNTINFOSSTREAMCOUNTINFOSTREAMCOUNTDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMCOUNTRESPONSEBODYSTREAMCOUNTINFOSSTREAMCOUNTINFOSTREAMCOUNTDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetailsStreamCountDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetails& obj) { 
      DARABONBA_PTR_TO_JSON(StreamCountDetail, streamCountDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(StreamCountDetail, streamCountDetail_);
    };
    DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetails() = default ;
    DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetails(const DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetails &) = default ;
    DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetails(DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetails &&) = default ;
    DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetails() = default ;
    DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetails& operator=(const DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetails &) = default ;
    DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetails& operator=(DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->streamCountDetail_ != nullptr; };
    // streamCountDetail Field Functions 
    bool hasStreamCountDetail() const { return this->streamCountDetail_ != nullptr;};
    void deleteStreamCountDetail() { this->streamCountDetail_ = nullptr;};
    inline const vector<Models::DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetailsStreamCountDetail> & streamCountDetail() const { DARABONBA_PTR_GET_CONST(streamCountDetail_, vector<Models::DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetailsStreamCountDetail>) };
    inline vector<Models::DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetailsStreamCountDetail> streamCountDetail() { DARABONBA_PTR_GET(streamCountDetail_, vector<Models::DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetailsStreamCountDetail>) };
    inline DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetails& setStreamCountDetail(const vector<Models::DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetailsStreamCountDetail> & streamCountDetail) { DARABONBA_PTR_SET_VALUE(streamCountDetail_, streamCountDetail) };
    inline DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetails& setStreamCountDetail(vector<Models::DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetailsStreamCountDetail> && streamCountDetail) { DARABONBA_PTR_SET_RVALUE(streamCountDetail_, streamCountDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetailsStreamCountDetail>> streamCountDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
