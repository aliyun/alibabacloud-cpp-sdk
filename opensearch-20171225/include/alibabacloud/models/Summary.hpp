// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUMMARY_HPP_
#define ALIBABACLOUD_MODELS_SUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SummaryMeta.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class Summary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Summary& obj) { 
      DARABONBA_PTR_TO_JSON(active, active_);
      DARABONBA_PTR_TO_JSON(meta, meta_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, Summary& obj) { 
      DARABONBA_PTR_FROM_JSON(active, active_);
      DARABONBA_PTR_FROM_JSON(meta, meta_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    Summary() = default ;
    Summary(const Summary &) = default ;
    Summary(Summary &&) = default ;
    Summary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Summary() = default ;
    Summary& operator=(const Summary &) = default ;
    Summary& operator=(Summary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && return this->meta_ == nullptr && return this->name_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool active() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline Summary& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline const SummaryMeta & meta() const { DARABONBA_PTR_GET_CONST(meta_, SummaryMeta) };
    inline SummaryMeta meta() { DARABONBA_PTR_GET(meta_, SummaryMeta) };
    inline Summary& setMeta(const SummaryMeta & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
    inline Summary& setMeta(SummaryMeta && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Summary& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<bool> active_ = nullptr;
    std::shared_ptr<SummaryMeta> meta_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
