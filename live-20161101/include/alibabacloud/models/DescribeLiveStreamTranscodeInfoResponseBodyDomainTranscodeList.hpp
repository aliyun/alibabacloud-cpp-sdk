// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODEINFORESPONSEBODYDOMAINTRANSCODELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODEINFORESPONSEBODYDOMAINTRANSCODELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeList& obj) { 
      DARABONBA_PTR_TO_JSON(DomainTranscodeInfo, domainTranscodeInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeList& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainTranscodeInfo, domainTranscodeInfo_);
    };
    DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeList() = default ;
    DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeList(const DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeList &) = default ;
    DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeList(DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeList &&) = default ;
    DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeList() = default ;
    DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeList& operator=(const DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeList &) = default ;
    DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeList& operator=(DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainTranscodeInfo_ != nullptr; };
    // domainTranscodeInfo Field Functions 
    bool hasDomainTranscodeInfo() const { return this->domainTranscodeInfo_ != nullptr;};
    void deleteDomainTranscodeInfo() { this->domainTranscodeInfo_ = nullptr;};
    inline const vector<Models::DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo> & domainTranscodeInfo() const { DARABONBA_PTR_GET_CONST(domainTranscodeInfo_, vector<Models::DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo>) };
    inline vector<Models::DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo> domainTranscodeInfo() { DARABONBA_PTR_GET(domainTranscodeInfo_, vector<Models::DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo>) };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeList& setDomainTranscodeInfo(const vector<Models::DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo> & domainTranscodeInfo) { DARABONBA_PTR_SET_VALUE(domainTranscodeInfo_, domainTranscodeInfo) };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeList& setDomainTranscodeInfo(vector<Models::DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo> && domainTranscodeInfo) { DARABONBA_PTR_SET_RVALUE(domainTranscodeInfo_, domainTranscodeInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo>> domainTranscodeInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
