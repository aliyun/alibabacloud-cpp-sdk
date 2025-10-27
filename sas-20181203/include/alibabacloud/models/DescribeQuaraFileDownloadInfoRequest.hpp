// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQUARAFILEDOWNLOADINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQUARAFILEDOWNLOADINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeQuaraFileDownloadInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQuaraFileDownloadInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(QuaraFileId, quaraFileId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQuaraFileDownloadInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(QuaraFileId, quaraFileId_);
    };
    DescribeQuaraFileDownloadInfoRequest() = default ;
    DescribeQuaraFileDownloadInfoRequest(const DescribeQuaraFileDownloadInfoRequest &) = default ;
    DescribeQuaraFileDownloadInfoRequest(DescribeQuaraFileDownloadInfoRequest &&) = default ;
    DescribeQuaraFileDownloadInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQuaraFileDownloadInfoRequest() = default ;
    DescribeQuaraFileDownloadInfoRequest& operator=(const DescribeQuaraFileDownloadInfoRequest &) = default ;
    DescribeQuaraFileDownloadInfoRequest& operator=(DescribeQuaraFileDownloadInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr
        && return this->quaraFileId_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline DescribeQuaraFileDownloadInfoRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // quaraFileId Field Functions 
    bool hasQuaraFileId() const { return this->quaraFileId_ != nullptr;};
    void deleteQuaraFileId() { this->quaraFileId_ = nullptr;};
    inline int32_t quaraFileId() const { DARABONBA_PTR_GET_DEFAULT(quaraFileId_, 0) };
    inline DescribeQuaraFileDownloadInfoRequest& setQuaraFileId(int32_t quaraFileId) { DARABONBA_PTR_SET_VALUE(quaraFileId_, quaraFileId) };


  protected:
    // The ID of the request source. Set the value to sas.
    std::shared_ptr<string> from_ = nullptr;
    // The ID of the quarantined file.
    // 
    // > If you do not specify this parameter, you cannot call the RollbackSuspEventQuaraFile operation to restore a quarantined file. You can call the [DescribeSuspEventQuaraFiles](~~DescribeSuspEventQuaraFiles~~) operation to query the IDs of quarantined files.
    std::shared_ptr<int32_t> quaraFileId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
