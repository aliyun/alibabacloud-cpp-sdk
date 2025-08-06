// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILEIDPLAYSTATISBYORIGINRESPONSEBODYFILEPLAYSTATISLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILEIDPLAYSTATISBYORIGINRESPONSEBODYFILEPLAYSTATISLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeFileIdPlayStatisByOriginResponseBodyFilePlayStatisList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileIdPlayStatisByOriginResponseBodyFilePlayStatisList& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(Flux, flux_);
      DARABONBA_PTR_TO_JSON(PlayCount, playCount_);
      DARABONBA_PTR_TO_JSON(RequestCount, requestCount_);
      DARABONBA_PTR_TO_JSON(StatisTime, statisTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileIdPlayStatisByOriginResponseBodyFilePlayStatisList& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(Flux, flux_);
      DARABONBA_PTR_FROM_JSON(PlayCount, playCount_);
      DARABONBA_PTR_FROM_JSON(RequestCount, requestCount_);
      DARABONBA_PTR_FROM_JSON(StatisTime, statisTime_);
    };
    DescribeFileIdPlayStatisByOriginResponseBodyFilePlayStatisList() = default ;
    DescribeFileIdPlayStatisByOriginResponseBodyFilePlayStatisList(const DescribeFileIdPlayStatisByOriginResponseBodyFilePlayStatisList &) = default ;
    DescribeFileIdPlayStatisByOriginResponseBodyFilePlayStatisList(DescribeFileIdPlayStatisByOriginResponseBodyFilePlayStatisList &&) = default ;
    DescribeFileIdPlayStatisByOriginResponseBodyFilePlayStatisList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileIdPlayStatisByOriginResponseBodyFilePlayStatisList() = default ;
    DescribeFileIdPlayStatisByOriginResponseBodyFilePlayStatisList& operator=(const DescribeFileIdPlayStatisByOriginResponseBodyFilePlayStatisList &) = default ;
    DescribeFileIdPlayStatisByOriginResponseBodyFilePlayStatisList& operator=(DescribeFileIdPlayStatisByOriginResponseBodyFilePlayStatisList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileId_ != nullptr
        && this->flux_ != nullptr && this->playCount_ != nullptr && this->requestCount_ != nullptr && this->statisTime_ != nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline DescribeFileIdPlayStatisByOriginResponseBodyFilePlayStatisList& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // flux Field Functions 
    bool hasFlux() const { return this->flux_ != nullptr;};
    void deleteFlux() { this->flux_ = nullptr;};
    inline int64_t flux() const { DARABONBA_PTR_GET_DEFAULT(flux_, 0L) };
    inline DescribeFileIdPlayStatisByOriginResponseBodyFilePlayStatisList& setFlux(int64_t flux) { DARABONBA_PTR_SET_VALUE(flux_, flux) };


    // playCount Field Functions 
    bool hasPlayCount() const { return this->playCount_ != nullptr;};
    void deletePlayCount() { this->playCount_ = nullptr;};
    inline int64_t playCount() const { DARABONBA_PTR_GET_DEFAULT(playCount_, 0L) };
    inline DescribeFileIdPlayStatisByOriginResponseBodyFilePlayStatisList& setPlayCount(int64_t playCount) { DARABONBA_PTR_SET_VALUE(playCount_, playCount) };


    // requestCount Field Functions 
    bool hasRequestCount() const { return this->requestCount_ != nullptr;};
    void deleteRequestCount() { this->requestCount_ = nullptr;};
    inline int64_t requestCount() const { DARABONBA_PTR_GET_DEFAULT(requestCount_, 0L) };
    inline DescribeFileIdPlayStatisByOriginResponseBodyFilePlayStatisList& setRequestCount(int64_t requestCount) { DARABONBA_PTR_SET_VALUE(requestCount_, requestCount) };


    // statisTime Field Functions 
    bool hasStatisTime() const { return this->statisTime_ != nullptr;};
    void deleteStatisTime() { this->statisTime_ = nullptr;};
    inline string statisTime() const { DARABONBA_PTR_GET_DEFAULT(statisTime_, "") };
    inline DescribeFileIdPlayStatisByOriginResponseBodyFilePlayStatisList& setStatisTime(string statisTime) { DARABONBA_PTR_SET_VALUE(statisTime_, statisTime) };


  protected:
    std::shared_ptr<string> fileId_ = nullptr;
    std::shared_ptr<int64_t> flux_ = nullptr;
    std::shared_ptr<int64_t> playCount_ = nullptr;
    std::shared_ptr<int64_t> requestCount_ = nullptr;
    std::shared_ptr<string> statisTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
