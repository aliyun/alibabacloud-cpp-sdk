// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDAILYPLAYREGIONSTATISRESPONSEBODYDAILYPLAYREGIONSTATISLIST_HPP_
#define ALIBABACLOUD_MODELS_GETDAILYPLAYREGIONSTATISRESPONSEBODYDAILYPLAYREGIONSTATISLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetDailyPlayRegionStatisResponseBodyDailyPlayRegionStatisList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDailyPlayRegionStatisResponseBodyDailyPlayRegionStatisList& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetDailyPlayRegionStatisResponseBodyDailyPlayRegionStatisList& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
    };
    GetDailyPlayRegionStatisResponseBodyDailyPlayRegionStatisList() = default ;
    GetDailyPlayRegionStatisResponseBodyDailyPlayRegionStatisList(const GetDailyPlayRegionStatisResponseBodyDailyPlayRegionStatisList &) = default ;
    GetDailyPlayRegionStatisResponseBodyDailyPlayRegionStatisList(GetDailyPlayRegionStatisResponseBodyDailyPlayRegionStatisList &&) = default ;
    GetDailyPlayRegionStatisResponseBodyDailyPlayRegionStatisList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDailyPlayRegionStatisResponseBodyDailyPlayRegionStatisList() = default ;
    GetDailyPlayRegionStatisResponseBodyDailyPlayRegionStatisList& operator=(const GetDailyPlayRegionStatisResponseBodyDailyPlayRegionStatisList &) = default ;
    GetDailyPlayRegionStatisResponseBodyDailyPlayRegionStatisList& operator=(GetDailyPlayRegionStatisResponseBodyDailyPlayRegionStatisList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->date_ == nullptr
        && return this->fileUrl_ == nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline GetDailyPlayRegionStatisResponseBodyDailyPlayRegionStatisList& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline GetDailyPlayRegionStatisResponseBodyDailyPlayRegionStatisList& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


  protected:
    std::shared_ptr<string> date_ = nullptr;
    std::shared_ptr<string> fileUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
