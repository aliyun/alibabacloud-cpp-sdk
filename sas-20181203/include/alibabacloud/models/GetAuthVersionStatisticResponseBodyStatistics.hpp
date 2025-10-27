// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHVERSIONSTATISTICRESPONSEBODYSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHVERSIONSTATISTICRESPONSEBODYSTATISTICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAuthVersionStatisticResponseBodyStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthVersionStatisticResponseBodyStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(AuthVersion, authVersion_);
      DARABONBA_PTR_TO_JSON(Count, count_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthVersionStatisticResponseBodyStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthVersion, authVersion_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
    };
    GetAuthVersionStatisticResponseBodyStatistics() = default ;
    GetAuthVersionStatisticResponseBodyStatistics(const GetAuthVersionStatisticResponseBodyStatistics &) = default ;
    GetAuthVersionStatisticResponseBodyStatistics(GetAuthVersionStatisticResponseBodyStatistics &&) = default ;
    GetAuthVersionStatisticResponseBodyStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthVersionStatisticResponseBodyStatistics() = default ;
    GetAuthVersionStatisticResponseBodyStatistics& operator=(const GetAuthVersionStatisticResponseBodyStatistics &) = default ;
    GetAuthVersionStatisticResponseBodyStatistics& operator=(GetAuthVersionStatisticResponseBodyStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authVersion_ == nullptr
        && return this->count_ == nullptr; };
    // authVersion Field Functions 
    bool hasAuthVersion() const { return this->authVersion_ != nullptr;};
    void deleteAuthVersion() { this->authVersion_ = nullptr;};
    inline int32_t authVersion() const { DARABONBA_PTR_GET_DEFAULT(authVersion_, 0) };
    inline GetAuthVersionStatisticResponseBodyStatistics& setAuthVersion(int32_t authVersion) { DARABONBA_PTR_SET_VALUE(authVersion_, authVersion) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetAuthVersionStatisticResponseBodyStatistics& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


  protected:
    // The edition of Security Center. Valid values:
    // 
    // *   **1**: Basic edition (Unauthorized)
    // *   **6**: Anti-virus edition
    // *   **5**: Advanced edition
    // *   **3**: Enterprise edition
    // *   **7**: Ultimate edition
    // *   **10**: Value-added Plan edition
    std::shared_ptr<int32_t> authVersion_ = nullptr;
    // The number of authorized servers.
    std::shared_ptr<int32_t> count_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
