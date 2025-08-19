// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OUTPUTCODELOCATION_HPP_
#define ALIBABACLOUD_MODELS_OUTPUTCODELOCATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class OutputCodeLocation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OutputCodeLocation& obj) { 
      DARABONBA_PTR_TO_JSON(location, location_);
      DARABONBA_PTR_TO_JSON(repositoryType, repositoryType_);
    };
    friend void from_json(const Darabonba::Json& j, OutputCodeLocation& obj) { 
      DARABONBA_PTR_FROM_JSON(location, location_);
      DARABONBA_PTR_FROM_JSON(repositoryType, repositoryType_);
    };
    OutputCodeLocation() = default ;
    OutputCodeLocation(const OutputCodeLocation &) = default ;
    OutputCodeLocation(OutputCodeLocation &&) = default ;
    OutputCodeLocation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OutputCodeLocation() = default ;
    OutputCodeLocation& operator=(const OutputCodeLocation &) = default ;
    OutputCodeLocation& operator=(OutputCodeLocation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->location_ != nullptr
        && this->repositoryType_ != nullptr; };
    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline OutputCodeLocation& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // repositoryType Field Functions 
    bool hasRepositoryType() const { return this->repositoryType_ != nullptr;};
    void deleteRepositoryType() { this->repositoryType_ = nullptr;};
    inline string repositoryType() const { DARABONBA_PTR_GET_DEFAULT(repositoryType_, "") };
    inline OutputCodeLocation& setRepositoryType(string repositoryType) { DARABONBA_PTR_SET_VALUE(repositoryType_, repositoryType) };


  protected:
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<string> repositoryType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
