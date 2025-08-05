// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FULLINSTANT_HPP_
#define ALIBABACLOUD_MODELS_FULLINSTANT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class FullInstant : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FullInstant& obj) { 
      DARABONBA_PTR_TO_JSON(snapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(tagName, tagName_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, FullInstant& obj) { 
      DARABONBA_PTR_FROM_JSON(snapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(tagName, tagName_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    FullInstant() = default ;
    FullInstant(const FullInstant &) = default ;
    FullInstant(FullInstant &&) = default ;
    FullInstant(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FullInstant() = default ;
    FullInstant& operator=(const FullInstant &) = default ;
    FullInstant& operator=(FullInstant &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->snapshotId_ != nullptr
        && this->tagName_ != nullptr && this->type_ != nullptr; };
    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline int64_t snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, 0L) };
    inline FullInstant& setSnapshotId(int64_t snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline FullInstant& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline FullInstant& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int64_t> snapshotId_ = nullptr;
    std::shared_ptr<string> tagName_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
