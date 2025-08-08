// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROJECTSPEC_HPP_
#define ALIBABACLOUD_MODELS_PROJECTSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ProjectSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProjectSpec& obj) { 
    };
    friend void from_json(const Darabonba::Json& j, ProjectSpec& obj) { 
    };
    ProjectSpec() = default ;
    ProjectSpec(const ProjectSpec &) = default ;
    ProjectSpec(ProjectSpec &&) = default ;
    ProjectSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProjectSpec() = default ;
    ProjectSpec& operator=(const ProjectSpec &) = default ;
    ProjectSpec& operator=(ProjectSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { ; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
