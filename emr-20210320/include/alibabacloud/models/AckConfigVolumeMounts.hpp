// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACKCONFIGVOLUMEMOUNTS_HPP_
#define ALIBABACLOUD_MODELS_ACKCONFIGVOLUMEMOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class AckConfigVolumeMounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AckConfigVolumeMounts& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, AckConfigVolumeMounts& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    AckConfigVolumeMounts() = default ;
    AckConfigVolumeMounts(const AckConfigVolumeMounts &) = default ;
    AckConfigVolumeMounts(AckConfigVolumeMounts &&) = default ;
    AckConfigVolumeMounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AckConfigVolumeMounts() = default ;
    AckConfigVolumeMounts& operator=(const AckConfigVolumeMounts &) = default ;
    AckConfigVolumeMounts& operator=(AckConfigVolumeMounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->path_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AckConfigVolumeMounts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline AckConfigVolumeMounts& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
