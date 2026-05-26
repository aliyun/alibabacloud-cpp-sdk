// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SMARTCLUSTERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SMARTCLUSTERCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FigureClusterConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class SmartClusterConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SmartClusterConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Figure, figure_);
    };
    friend void from_json(const Darabonba::Json& j, SmartClusterConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Figure, figure_);
    };
    SmartClusterConfig() = default ;
    SmartClusterConfig(const SmartClusterConfig &) = default ;
    SmartClusterConfig(SmartClusterConfig &&) = default ;
    SmartClusterConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SmartClusterConfig() = default ;
    SmartClusterConfig& operator=(const SmartClusterConfig &) = default ;
    SmartClusterConfig& operator=(SmartClusterConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->figure_ == nullptr; };
    // figure Field Functions 
    bool hasFigure() const { return this->figure_ != nullptr;};
    void deleteFigure() { this->figure_ = nullptr;};
    inline const FigureClusterConfig & getFigure() const { DARABONBA_PTR_GET_CONST(figure_, FigureClusterConfig) };
    inline FigureClusterConfig getFigure() { DARABONBA_PTR_GET(figure_, FigureClusterConfig) };
    inline SmartClusterConfig& setFigure(const FigureClusterConfig & figure) { DARABONBA_PTR_SET_VALUE(figure_, figure) };
    inline SmartClusterConfig& setFigure(FigureClusterConfig && figure) { DARABONBA_PTR_SET_RVALUE(figure_, figure) };


  protected:
    shared_ptr<FigureClusterConfig> figure_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
