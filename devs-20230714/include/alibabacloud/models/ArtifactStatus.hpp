// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ARTIFACTSTATUS_HPP_
#define ALIBABACLOUD_MODELS_ARTIFACTSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ArtifactStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ArtifactStatus& obj) { 
      DARABONBA_PTR_TO_JSON(arn, arn_);
      DARABONBA_PTR_TO_JSON(checksum, checksum_);
      DARABONBA_PTR_TO_JSON(size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ArtifactStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(arn, arn_);
      DARABONBA_PTR_FROM_JSON(checksum, checksum_);
      DARABONBA_PTR_FROM_JSON(size, size_);
    };
    ArtifactStatus() = default ;
    ArtifactStatus(const ArtifactStatus &) = default ;
    ArtifactStatus(ArtifactStatus &&) = default ;
    ArtifactStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ArtifactStatus() = default ;
    ArtifactStatus& operator=(const ArtifactStatus &) = default ;
    ArtifactStatus& operator=(ArtifactStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arn_ != nullptr
        && this->checksum_ != nullptr && this->size_ != nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline ArtifactStatus& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // checksum Field Functions 
    bool hasChecksum() const { return this->checksum_ != nullptr;};
    void deleteChecksum() { this->checksum_ = nullptr;};
    inline string checksum() const { DARABONBA_PTR_GET_DEFAULT(checksum_, "") };
    inline ArtifactStatus& setChecksum(string checksum) { DARABONBA_PTR_SET_VALUE(checksum_, checksum) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ArtifactStatus& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    std::shared_ptr<string> arn_ = nullptr;
    std::shared_ptr<string> checksum_ = nullptr;
    std::shared_ptr<int64_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
